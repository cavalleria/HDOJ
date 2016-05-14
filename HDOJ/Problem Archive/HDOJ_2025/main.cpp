#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str;
	while(getline(cin, str)){
		auto max = str[0];
		int k;
		string str2 = "(max)";
		for(string::size_type i = 0; i != str.size(); i++){
			if(str[i] >= max){
				max = str[i];
			}
		}
		
		for(string::size_type i = 0; i != str.size(); i++){
			cout << str[i];
			if(str[i] == max){
				cout << "(max)";
			}
		}
		cout << endl;
		
	}
	return 0;
}
