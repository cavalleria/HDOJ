#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	string s;
	int n;
	cin >> n;
	cin.get();
	while(n--){
		unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
		getline(cin, s);
		for(int i = 0; i < s.size(); i++)
		{
			switch(s[i]){
				case 'a' :
					++aCnt;
					break;
				case 'e' :
					++eCnt;
					break;
				case 'i' :
					++iCnt;
					break;
				case 'o' :
					++oCnt;
					break;
				case 'u' :
					++uCnt;
					break;
			}
		}
		cout << "a:" << aCnt << '\n'
		     << "e:" << eCnt << '\n'
		     << "i:" << iCnt << '\n'
		     << "o:" << oCnt << '\n'
		     << "u:" << uCnt << endl;
		
		if(n){
			cout << endl;
		}
		
	}
	
	return 0;
}
