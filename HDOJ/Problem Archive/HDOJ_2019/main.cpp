#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, m;
	
	while((cin >> n >> m) && (n != 0) && (m != 0)){
		int a[101] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		for(int i = 0; i < n; i++){
			if(m < a[i]){
				for(int j = n; j >= i; j--){
					a[j + 1] = a[j];
				}
				a[i] = m;
				break;
			}
		}
		
		if(m > a[n - 1]){
			a[n] = m;
		}
		
		bool flag = false;
		for(int i = 0; i < n + 1; i++){             	
			if(flag){
				cout << " ";
			}
			cout << a[i];
			flag = true;
        } 
        cout << endl;
	}
	return 0;
}
