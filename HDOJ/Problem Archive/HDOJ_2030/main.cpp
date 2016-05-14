#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	cin.get();
	while(n--){
		string s;
		int sum = 0;
		getline(cin, s);
		for(decltype(s.size()) index = 0; index != s.size(); index++){
			if(s[index] < 0){
				sum++;
			}
		}
		cout << sum / 2 << endl;
	}
	return 0;
}
