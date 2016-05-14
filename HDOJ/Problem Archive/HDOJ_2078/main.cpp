#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(int a, int b){
	if(a < b){
		return true;
	}
	else{
		return false;
	}
}
int main(int argc, char** argv) {
	int T;
	cin >> T;
	while(T--){
		int n, m;
		int a[41];
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		sort(a, a + n, cmp);
		
		int s[41];
		for(int i = 0; i < m; i++){
			if(i == 0){
				s[0] = (100 - a[0]) * (100 - a[0]);
			}
			else{
				s[i] = (a[i - 1] - a[i]) * (a[i - 1] - a[i]);
			}
		}	
		
		int max = 0;
		for(int i = 0; i < m; i++){
			if(s[i] > max){
				max = s[i];
			}
		}	
		
		cout << max << endl;
		
	}
	return 0;
}





