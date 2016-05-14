#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum;
	int x;
	while((cin >> n) && (n != 0)){
		sum = 0;
		for(int i = 0; i < n; i++){
			cin >> x;
			
			sum += x / 100;
			x %= 100;
			
			sum += x / 50;
			x %= 50;
			
			sum += x / 10;
			x %= 10;
			
			sum += x / 5;
			x %= 5;
			
			sum += x / 2;
			x %= 2;	
			
			sum += x;		
		}
		cout << sum << endl;	
	}
	return 0;
}
