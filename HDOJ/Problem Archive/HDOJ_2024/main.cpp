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
		int flag = 0;
		getline(cin, s);
		int i;
		if(s[0] == '_' || (s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z')){
			for(i = 1; i < s.size(); i++){
				if((s[i] == '_' )||(s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= '0' && s[i] <= '9')){
					continue;
				}
				else{
					break;
				}
			}
			
			if(i == s.size()){
				cout << "yes" << endl;
			}
			else{
				cout << "no" << endl;
			}
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
