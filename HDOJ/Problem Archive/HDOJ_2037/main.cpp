#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void greedy(int S[], int F[], int B[], int n){
	B[0] = 1; 
	int k = 0; 
	for (int i = 1; i < n; i++){
		if(S[i] >= F[k]){
			B[i] = 1; k = i;
		}
		else{
			B[i] = 0;
		}
	}
}

int main(int argc, char** argv) {
	int n;
	int b[100];
	while(cin >> n && n != 0){
		int s[100], f[100];
		for(int i = 0; i < n; i++){
			cin >> s[i] >> f[i];
		}
		
		for(int i = 0; i < n - 1; i++){
			for(int j = 0; j < n - 1 - i; j++ ){
				if(f[j] > f[j + 1]){
					int temp1 = f[j];
					f[j] = f[j + 1];
					f[j + 1] = temp1;
					
					int temp2 = s[j];
					s[j] = s[j + 1];
					s[j + 1] = temp2;
				}
			}
		}
		
		greedy(s, f, b, n);
		
		
		int cnt = 0;		
		for(int i = 0; i < n; i++){

			if(b[i] == 1){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}


