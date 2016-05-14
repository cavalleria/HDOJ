#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m, n;
	int a[100][100];
	while((cin >> m >> n) && (m != 0) && (n != 0)){
		for(int i = 0; i < m; i ++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		
		int x = 0, y = 0;
		int max = 0;
		
		for(int i = 0; i < m; i ++){
			for(int j = 0; j < n; j++){
				if(abs(a[i][j]) > abs(max)){
					max = a[i][j];
					x = i + 1;
					y = j + 1;
				}
			}
		}
		
		cout << x << " " << y << " " << max << endl; 
		
	}
	return 0;
}
