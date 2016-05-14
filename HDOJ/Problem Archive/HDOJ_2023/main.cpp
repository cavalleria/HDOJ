#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, m;
	int a[51][6] = {0};
	while(cin >> n >> m){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		
		//求每个学生的平均成绩 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				a[i][m] += a[i][j];
			}
			if(i == 0){
				cout << fixed << setprecision(2) << 1.0 * a[i][m] / m;
			}
			else{
				cout << " " << fixed << setprecision(2) << 1.0 * a[i][m] / m;
			}
		}
		cout << endl;
		
		//求每门课的平均成绩 
		for(int j = 0; j < m; j++){
			for(int i = 0; i < n; i++){
				a[n][j] += a[i][j];
			}
			if(j == 0){
				cout << fixed << setprecision(2) << 1.0 * a[n][j] / n;
			}
			else{
				cout << " " << fixed << setprecision(2) << 1.0 * a[n][j] / n;
			}	
		}
		cout << endl; 
		
		int cnt = 0;
		for(int i = 0; i < n; i++){
			int flag = 0;
			for(int j = 0; j < m; j++){
				if(a[i][j] >= 1.0 * a[n][j] / n){
					flag++;
				}
				if(flag == m){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		cout << endl;
		
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= m; j++){
				a[i][j] = 0;
			}
		}
	}
	return 0;
}
