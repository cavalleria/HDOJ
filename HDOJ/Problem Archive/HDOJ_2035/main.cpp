#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b, a | b){
		int temp = 1;
		for(int i = 1; i <= b; i++){
			temp = temp * a % 1000 ;
		}
		cout << temp % 1000 << endl;
	}
}


