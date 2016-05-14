#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//错排+组合 

//C(n,m)的计算 
long long Cnm(int n,int m){
	int i, j = 1;
 	long long sum=1;
    for(i = n; i >= n - m + 1; i--){
    	sum = sum * i / j;
		j++;
	}
	return sum;
}

int main(int argc, char** argv) {
	long long f[22];
	f[0] = 0, f[1] = 0; f[2] = 1;
	for(int i = 3; i < 21; i++){
		f[i] = (i - 1) * (f[i - 2] + f[i - 1]);
		
	}
	
	int c; 
	cin >> c;
	while(c--){
		int n, m;
		cin >> n >> m;	
					
		cout << f[m] * Cnm(n, m) << endl;
	}
	return 0;
}
