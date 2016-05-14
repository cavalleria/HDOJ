#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	while(cin >> n){
		int sum = 1;
		for(int i = n; i > 1; i--){
			sum = 2 * sum + 2;
		}
		
		cout << sum << endl;
	}
	return 0;
}
