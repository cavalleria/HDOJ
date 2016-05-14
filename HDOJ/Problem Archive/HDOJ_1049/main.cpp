#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, u, d;
	while(cin >> n >> u >> d && n != 0){
		int p = u - d;
		int s = n - u;
		int t = s / p;
		if(t * p < s){
			t++;
		}	
		t *= 2;
		t++;
		cout << t << endl;
	}
	return 0;
}
