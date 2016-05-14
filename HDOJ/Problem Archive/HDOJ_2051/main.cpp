#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		int a[10];
		int i = 0, t;
		while(n != 0){
			t = n % 2;
			n = n / 2;
			a[i++] = t;
		}
		
		for(int j = i - 1; j >= 0; j--){
			cout << a[j];
		}
		cout << endl;
	}
	return 0;
}
