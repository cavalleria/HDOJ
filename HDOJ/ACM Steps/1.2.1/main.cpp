#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b;
	while(cin >> hex >> a >> b){
		int c = a + b;
		
		cout << dec << c << endl;
	}
	return 0;
}
