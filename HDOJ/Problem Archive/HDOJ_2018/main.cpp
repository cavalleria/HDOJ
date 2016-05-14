#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int sum;
	int f1, f2, f3, fn;
	while((cin >> n) && (n != 0)){
		f1 = 1;
		f2 = 2;
		f3 = 3;
		
		if(n == 1){
			cout << f1 << endl;
		}
		else if(n == 2){
			cout << f2 << endl;
		}
		else if(n == 3){
			cout << f3 << endl;
		}
		else{
			for(int i = 4; i <= n; i++){
				fn = f3 + f1;
				f1 = f2;
				f2 = f3;
				f3 = fn;
			}
			cout << fn << endl;	
		}
	}
	return 0;
}
