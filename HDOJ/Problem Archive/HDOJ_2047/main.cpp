#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//分为两种情况：第n格取"O"和第n格不取"O" 
//f(n) = f(n-2)*2 + f(n-1)*2
int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		long long f[41] = {0};
		f[1] = 3, f[2] = 8;
		for(int i = 3; i <= n; i++){
			f[i] = 2 * (f[i - 1] + f[i - 2]);
		}
		cout << f[n] << endl;
	}
	return 0;
}
