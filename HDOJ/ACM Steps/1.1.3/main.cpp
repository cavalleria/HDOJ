#include <iostream>
#include <utility>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	pair<int, int> plus;
	while(cin >> plus.first >> plus.second ){
		int sum = 0;
		if((plus.first == 0) && (plus.second == 0)){
			break;
		}
		sum = plus.first + plus.second;	
		cout << sum << endl;	
	}
	return 0;
}
