#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char x;
	int y;
	int n;
	cin >> n;
	while(n--){
		cin >> x >> y;
		int m = 0;
		if(x >= 'A' && x <= 'Z'){
			m = x - 64;
		}
		if(x >= 'a' && x <= 'z'){
			m = 96 - x;
		}
		cout << m + y << endl;
	}
	return 0;
}
