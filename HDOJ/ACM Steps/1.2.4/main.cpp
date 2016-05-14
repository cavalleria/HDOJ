#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	while(n--){
		
		int a, b, c;
		cin >> a >> b >> c;
		
		if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)){
			cout << "good" << endl;
		}
		else if((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && a != b && a != c)){
			cout << "perfect" << endl;
		}
		else{
			cout << "just a triangle" << endl;
		}
	}
	return 0;
}
