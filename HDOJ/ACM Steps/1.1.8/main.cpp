#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		int sum = 0;
		int x;
		int i;
		for(i = 0;i < m; i++){
			cin >> x;
			sum += x;
		}
		if(n != 0){
			cout << sum << endl << endl;
		}	
		if(n == 0){
			cout << sum << endl;
		}
	}
	return 0;
}
