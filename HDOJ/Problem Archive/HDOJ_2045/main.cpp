#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		int i;
  		long long a[51];
        a[1] = 3;
        a[2] = 6;
		a[3] = 6;
		
		for(i = 4; i < 51; i++){
			a[i] = a[i - 1] + a[i - 2] * 2;
		}
    	cout << a[n] << endl;
    }
    return 0;
}
