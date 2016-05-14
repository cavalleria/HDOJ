#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//����a�������ÿһ���ֵ������dp[i][j]ָ�ӵڣ�i,j�������ʱ�ܵõ������ͣ������ڣ�i,j������ֵ����
	int a[101][101];
	int dp[101][101];
	
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;  
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= i; j++){
        		cin >>a[i][j];
			}
		}
		
		//dp[n][j]����a[n][j]��ֵ 
		for(int j = 1; j <= n; j++){
			dp[n][j] = a[n][j];
		} 
		
		for(int i = n - 1; i >= 1; i--){
            for(int j = i; j >= 1; j--){
            	dp[i][j] = a[i][j] + (dp[i + 1][j] > dp[i + 1][j + 1] ? dp[i + 1][j] : dp[i + 1][j + 1]);  	
			}  
		}
		
		cout << dp[1][1] << endl;
	}
	return 0;
}
