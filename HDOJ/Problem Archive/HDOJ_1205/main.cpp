#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int max = 0;
		long long s = 0;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			if (a > max){
				max = a;
			}
			s += a;
		}
		
		if(s - max < max - 1){
			cout << "No" << endl;
		} 
		else{
			cout << "Yes" << endl;
		}
	}
	return 0;
}
