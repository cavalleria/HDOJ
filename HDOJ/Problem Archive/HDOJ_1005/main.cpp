#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, n, i;
		
	while(cin >> a >> b >> n && a || b || n){
		int f[2] = {1, 1};
		for(int i = 0; i < (n % 49 - 1) / 2; i++){
		   f[0] = (a * f[1] + b * f[0]) % 7;
		   f[1] = (a * f[0] + b * f[1]) % 7;
		}
		if(n % 2){
			cout << f[0] << endl;
		}
		else{
			cout << f[1] << endl;
		}
	}
	return 0;
}
