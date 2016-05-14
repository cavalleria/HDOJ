#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n; 
    int a[30][30];
    
	while(cin >> n){
		a[0][0]=1; 
		a[1][0]=1; 
		a[1][1]=1;
		
		for(int i = 2; i < n; i++){
			a[i][0] = 1;
			for(int j = 1; j < n - 1; j++){
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			} 
			a[i][i] = 1;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= i; j++){
				if(j == i){
					cout << a[i][j] << endl;
				}			
				else{
					cout << a[i][j] << " " ;
				}
			}                   
		}
		cout << endl;
               
	}
	return 0;
}
