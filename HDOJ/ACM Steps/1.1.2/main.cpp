#include <iostream>
#include <utility>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	pair<int, int> plus;
	int n;
	while(cin >> n){
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> plus.first >> plus.second;			
			sum = plus.first + plus.second;	
			cout << sum << endl;
		}
	}
	return 0;
}
