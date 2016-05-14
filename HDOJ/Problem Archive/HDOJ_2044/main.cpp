#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//f(n) = f(n-1) + f(n-2)

void RouteNumber(int a, int b){
	
	if(b == a){
		cout << 0 << endl;
	}
	else if(b == a + 1){
		cout << 1 << endl;
	}
	else if(b == a + 2){
		cout << 2 << endl;
	}
	else{
		//sum = RouteNumber(a, b - 1) + RouteNumber(a, b - 2);
		long long sum, sum1 = 1, sum2 = 2;
		int t;
		for(int i = 1; i <= b - a - 2; i++){
			sum = sum1 + sum2;
			sum1 = sum2;
			sum2 = sum;
		}
		cout << sum << endl;
	} 
}
int main(int argc, char** argv) {
	int n;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		RouteNumber(a, b);
	}
	return 0;
}
