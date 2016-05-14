#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum1, sum2, sum3, r, n;
	
	for(int i = 1000; i <= 9999; i++){
		
		sum1 = 0, sum2 = 0, sum3 = 0, r = 0;
		n = i;
		while(n){
			r = n % 10;
			sum1 += r;
			n /= 10;
		}
		
		n = i;
		while(n){
			r = n % 12;
			sum2 += r;
			n /= 12;
		}
		
		if(sum1 == sum2){
			n = i;
			while(n){
				r = n % 16;
				sum3 += r;
				n /= 16;
			}
			
			if(sum3 == sum1){
				cout << i << endl;
			}
		}
		
	}
	return 0;
}
