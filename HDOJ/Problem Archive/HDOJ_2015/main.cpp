#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, m;
	int arr[100];

	while(cin >> n >> m){
		for(int i = 0; i < n; i++){
			arr[i] = 2 * i + 2;
		}
		
		int a = n / m;
		int b = n % m;
		int avg = 0;
		bool flag1 = false;
		for(int j = 0; j < a; j++){
			for(int i = m * j; i < m * j + m; i++){
				avg += arr[i];				
			}
			avg /= m;
			
			if(flag1){
				cout << " ";				
			}
			flag1 = true;
			cout << avg;					
			avg = 0;
		}
		
  		bool flag2 = true;
		if(b > 0){
			avg = 0;
			for(int j = n - 1; j > n - 1 - b; j--){
				avg += arr[j];				
			}
			avg /= b;
			if(flag2){
				cout << " ";
				flag2 = true;				
			}
			cout << avg;		
		}
		cout << endl;	
	
	}
	return 0;
}
