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
		int test[] = {0, 0, 0, 0};
		getline(cin, s);
		size_t len = s.length();
		
		if(len >= 8 && len <=16){
			for(int i = 0; i < len; i++){
				if(isupper(s[i])){
					test[0] = 1;
				}
				else if(islower(s[i])){
					test[1] = 1;
				}
				else if(isdigit(s[i])){
					test[2] = 1;
				}
				else if(s[i] == '~' || s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^'){
					test[3] = 1; 
				}  	
			}
			
			if(test[0] + test[1] + test[2] + test[3] >= 3) {
				cout << "YES" << endl; 
			} 
            else{
            	cout << "NO" << endl; 	
			} 
		}
		else{
			cout << "NO" << endl; 
		}
		
	}
	return 0;
}
