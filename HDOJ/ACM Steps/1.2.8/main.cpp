#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num[26] = {0};
	string let ="abcdefghijklmnopqrstuvwxyz";
	string str;
	while(getline(cin, str)){
		int num[26] = {0};
		auto len = str.length();        
	       
		for(int i = 0; i < len; i++){          
		  if(str[i] >= 'a' && str[i] <= 'z'){  
		    	int t = str[i]-'a';  
				num[t]++;            
			}
        }         
        
		for(int i = 0; i < 26; i++) {
			cout << let[i] << ":" << num[i] << endl;
		}
		cout << endl; 
	}
	return 0;
}
