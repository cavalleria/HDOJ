#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n; 
	while(cin >> n){
		int an = 0;
		for(int i = 1; i <= n; i++){
			if(n % i == 0){
				an = 1 - an;
			}
		}
		cout << an << endl;
	}
	return 0;
}
