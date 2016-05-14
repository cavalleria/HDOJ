#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int c; 
	cin >> c;
	while(c--){
		int n;
		cin >> n;	
		long long fn;
		fn = 2 * n * (2 * n + 1) / 2 + 1 - 2 * n;		
		cout << fn << endl;
	}
	return 0;
}

