#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long n;
	while(cin >> n){
		if((n - 2) % 4 == 0){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
