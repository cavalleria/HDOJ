#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gcd(int a,int b){    
	if(b == 0){
		return a; 	
	}   
	return gcd(b, a % b);
}

int main(int argc, char** argv) {
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int a;
		int cnt;
		cnt = a = 1;
		int b;
		for(int i = 0; i < n; i++){
			cin >> b;
			cnt = a / gcd(a, b) * b;
			a = cnt;
		}
		cout << cnt << endl;
	}
	return 0;
}
