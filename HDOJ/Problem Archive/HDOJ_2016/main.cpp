#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int &a, int &b)
{
	a=a+b;
    b=a-b;
    a=a-b;
}

int main(int argc, char** argv) {
	int n;
	int a[100];
	while((cin >> n) && (n != 0)){
		for(int i = 0; i < n; i++){
			cin >>a[i];
		}
		
		int min = a[0];
		int k = 0;
		for(int i = 0; i < n; i++){
			if(a[i] < min){
				min = a[i];
				k = i;
			}
		}
		if(k != 0){
			swap(a[0], a[k]);
		}
		
		
		bool flag = false;  
               
		for(int i = 0; i < n; i++){
			if(flag){  
            	cout << " ";                  
			}
			flag = true; 
			cout << a[i];
		}
		cout << endl;
		
	}
	return 0;
}
