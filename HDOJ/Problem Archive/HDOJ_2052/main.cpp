#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m, n;
	while(cin >> n >> m){
		char s[75][75];
		
		for(int i = 0; i < m + 2; i++){
			for(int j = 0; j < n + 2; j++){
				s[i][j] = ' ';
			}
		}
		
		s[0][0] = '+';
		s[0][n + 1] = '+';
		s[m + 1][0] = '+';
		s[m + 1][n + 1] = '+';
		
		for(int j = 1; j < n + 1; j++){
			s[0][j] = '-';
			s[m + 1][j] = '-';
		}
			
		for(int i = 1; i < m + 1; i++){
			s[i][0] = '|';
			s[i][n + 1] = '|';
		}
		
		for(int i = 0; i < m + 2; i++){
			for(int j = 0; j < n + 2; j++){
				cout << s[i][j];
				}
				cout << endl;
		}
		cout << endl;			
	}
	return 0;
}
