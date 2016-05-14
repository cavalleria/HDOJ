#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long f[21];
	f[0] = 0, f[1] = 0; f[2] = 1;
	for(int i = 3; i < 21; i++){
		f[i] = (i - 1) * (f[i - 2] + f[i - 1]);
		
	}
	
	int c; 
	cin >> c;
	while(c--){
		int n;
		cin >> n;		
		long long s = 1;
		for(int i = 1; i <= n; i++){
			s *= i;
		}
			
		cout << fixed << setprecision(2) << 100.0 * f[n] / s << "%" << endl;
	}
	return 0;
}
