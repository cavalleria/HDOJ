#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		int m;
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> m;
			sum += m;
		}
		cout << sum << endl;
	}
	return 0;
}
