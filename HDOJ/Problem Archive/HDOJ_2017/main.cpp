#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		
		int cnt = 0;
		for(auto c : s){
			if(isdigit(c)){
				cnt++;
			}			
		}
		
		cout << cnt << endl;
	}
	return 0;
}
