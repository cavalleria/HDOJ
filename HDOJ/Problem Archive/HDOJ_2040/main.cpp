#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b; 
		
		int suma = 0, sumb = 0;
		int i, j;
		for(i = 1; i <= a - 1; i++){
			if(a % i == 0){
				suma += i;
			}
		}
		for(j = 1; j <= b - 1; j++){
			if(b % j == 0){
				sumb += j;
			}
		}
		if((suma == b) && (sumb == a)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}
