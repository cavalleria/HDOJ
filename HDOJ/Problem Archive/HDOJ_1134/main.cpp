#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//¿¨ÌØÀ¼ÊýC(n)=((4n-2)/(n+1))*C(n-1)
long long f[105];
int main(int argc, char** argv) {
    int n;
    while(cin >> n && n != -1){
    	f[0] = 1;
	   	for(int i = 1; i <= n; i++){
	        f[i]=(4 * i - 2) * f[i - 1] / (i + 1);
	    }
	    cout << f[n] << endl;
	}
    
    return 0;
}

