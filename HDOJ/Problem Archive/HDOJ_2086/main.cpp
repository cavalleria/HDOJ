#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//ÊýÑ§¹éÄÉ
//A1 = (n/(n+1))A0 + (1/(n+1))An+1 - (2/(n+1))Cn - (4/(n+1))Cn-1 - ... -(2n/(n+1))C1
//   = [ nA0 + An+1 - 2(Cn + 2Cn-1 + 3Cn-2 + ... + nC1) ]/(n+1) 
int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		double a[3005];
		double c[3005];
		cin >> a[0] >> a[n + 1];
		for(int i = 1; i <= n; i++){
			cin >> c[i];
		}
		
		double sum = 0.0; 
		for(int i = n; i >= 1; i--){
			sum += (n - i + 1) * c[i];
		}
		
		double result = (n * a[0] + a[n + 1] - 2 * sum) / (n + 1);
		cout << fixed << setprecision(2) << result << endl;
	}
	return 0;
}
