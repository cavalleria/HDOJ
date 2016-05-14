#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	while(n--){
		double a, b, c;
		cin >> a >> b >> c;
		if(a > b){
			double t = a; a = b; b = t;
		}
     	if(a > c){
			double t = a; a = c; c = t;
		}
    	if(b > c){
			double t = b; b = c; c = t;
		}
		if(a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
