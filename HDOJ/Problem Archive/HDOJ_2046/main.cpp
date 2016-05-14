#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//f(n) = f(n-1) + f(n-2)
int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		long long num[51];
		num[1] = 1;
		num[2] = 2;
		
		for(int i = 3; i <= n; i++){
			num[i] = num[i - 1] + num[i - 2];
		}
		cout << num[n] << endl;		
	}
	return 0;
}
