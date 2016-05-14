#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int lcm(long long m, __int64 n){
	__int64 k = m, l = n;
	__int64 remainder;
	if(n == 0)
		return m;
	while(n > 0){
		remainder =  m % n;
		m = n;
		n = remainder;		
	}
	
	return (k * l) / m;
}

int main(int argc, char** argv) {
	int n;
	__int64 x;
	while(cin >> n){
		__int64 t = 1;
		while(n--){
			cin >> x;
			t = lcm(t, x);
		}
		cout << t << endl;
	}
	return 0;
}
