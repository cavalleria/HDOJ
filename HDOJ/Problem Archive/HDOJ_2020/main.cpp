#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	while((cin >> n) && (n != 0)){
		int a[100];
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		for(int i = 0; i < n - 1; i++){
			for(int j = i; j < n; j++){
				if(abs(a[i]) < abs(a[j])){
					swap(a[i], a[j]);
				}				
			}
		}
		
		for(int i = 0; i < n; i++){
			if(i != 0){
				cout << " ";
			}
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
