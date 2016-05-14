#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pow(int a,int k){
    int rec = 1;
    while(k){
        if(a >= 10) a %= 10;          
        if (k % 2 == 0){
        	a *= a;
        	a %= 10;
        	k /= 2;
        }
        else{
        	rec *= a;
            rec %= 10;
            k--;
		}
             
    }
    return rec;
}

int main(int argc, char** argv) {
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		cout << pow(n, n) << endl;
	}
	return 0;
}



		

