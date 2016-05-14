#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	int cases;
	int m;
	int a[45];
	cin >> cases;
	while(cases--){
		a[0] = 0; 
		a[1] = 1;
		a[2] = 1; 
		
		cin >> m;
		
		for(int i = 2; i <= m; i++){
			a[i] = a[i - 1] + a[i - 2];
		}
		
		cout << a[m] << endl;
	}
	return 0;
}
