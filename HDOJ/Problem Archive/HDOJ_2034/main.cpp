#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, m;
	while(cin >> n >> m, n | m){
		int a[100], b[100];
		int c[100];
		int flag[100] = {0};
		
		int t = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i] == b[j]){
					flag[i] = 1;
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			if(flag[i] == 0){
				c[t++] = a[i];
			}                
		}
		
		
		for(int i = 0; i < t; i++){
			for(int j = i; j < t; j++){
				if(c[i] > c[j]){
					swap(c[i], c[j]);
				} 
			}
		}  
        
        if(t == 0){
        	cout << "NULL" << endl;
		} 
        else{
        	for(int i = 0; i < t; i++){
        		cout << c[i] << " ";
			}
			cout << endl;
		}
       
		
		             
            
	}
	return 0;
}



 
