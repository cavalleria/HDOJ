#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin >> n && n != 0){
		int a[8] = {0};
		
		for(int i = 0; i < 8; i++){
			a[i] = n % 2;
			n /= 2;
		}
		
		for(int i = 0; i < 8; i++){
			if( a[i] == 1){
				cout << pow(2, i) << endl;
				break;
			}
		}
	}
	return 0;
}
