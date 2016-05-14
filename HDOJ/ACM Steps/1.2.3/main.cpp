#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int flag = n;
	while(n--){
		
		int a, b, c;
		cin >> a >> b >> c;
		
		if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)){
			cout << "Scenario #" << flag - n << ":" << endl;
			cout << "yes" << endl << endl;
		}
		else{
			cout << "Scenario #" << flag - n << ":" << endl;
			cout << "no" << endl << endl;
		}
	}
	return 0;
}
