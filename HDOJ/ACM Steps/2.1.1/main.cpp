#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int m, int n){
	unsigned int remainder;
	while(n > 0){
		remainder =  m % n;
		m = n;
		n = remainder;		
	}
	
	return m;
}
int main(int argc, char** argv) {
	int m, n;
	while(cin >> m >> n){
		int res = (m * n) / gcd(m, n);
		cout << res << endl;
	}
	return 0;
}
