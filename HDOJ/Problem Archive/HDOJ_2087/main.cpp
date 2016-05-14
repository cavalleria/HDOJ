#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s1, s2;
	while(cin >> s1 && s1 != "#" && cin >> s2 ){
		int cnt = 0;
    	for(size_t i = 0; i < s1.length(); i++){
    		size_t found;
    		while ((found = s1.find(s2, i)) != string::npos){  
            	cnt++;  
           		i = found + s2.length();  
        	}
		}
		cout << cnt << endl;
	}
	return 0;
}
