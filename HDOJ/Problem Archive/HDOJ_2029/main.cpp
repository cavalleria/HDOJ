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
		getline(cin, s);
		string::iterator start = s.begin();
		string::iterator end = s.end();
		
		bool flag = false;
		while(start < end){
			if(*start == *(end - 1)){
				start += 1;
				end -= 1;
				flag = true;
			}
			else{
				flag = false;
				break;
			}
		}
		
		if(flag){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
		
	}
	return 0;
}
