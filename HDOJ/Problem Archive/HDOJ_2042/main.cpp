#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int cases;
	cin >> cases;
	while(cases--){
		int a;
		int sum = 3;
		cin >> a;
		
		while(a--){
			sum  = (sum - 1) * 2;			
		}
		
		cout << sum << endl;
	}
	return 0;
}
