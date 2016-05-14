#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	while(getline(cin, s)){
		for(decltype(s.size()) index = 0; index != s.size(); index++){
			if(index == 0 || s[index - 1] == ' '){
				s[index] = toupper(s[index]);
			}
		}
		cout << s << endl;
	}
	return 0;
}
