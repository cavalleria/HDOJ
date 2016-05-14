#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int n;
	int r;
	while(cin >> n >> r){
		char temp[100];
		int i = 0;
		int flag = 0;
		if(n < 0){
       		n = -n;
        	flag = 1;
       	}
       	
		while(n != 0){
			
			temp[i] = n % r;
			
			if(temp[i] >= 10){
				temp[i] = 'A' + temp[i] - 10;
			}
			else{
				temp[i] = '0' + temp[i];
			}
			n = n / r;
			i++;
		}
		
		if(flag) {
			cout << "-";
		}
		
		for(int j = i - 1; j >= 0; j--){
			cout << temp[j];			
		}
		cout << endl;
	}
	return 0;
}
