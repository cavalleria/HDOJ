#include <iostream>
#include <algorithm>
using namespace std;
/*
贪心策略：
一、如果a的最慢速度大于b的最慢，则直接a的最慢与b的最慢比赛，赢一场；
二、如果a的最慢速度小于b的最慢，则用a的最慢浪费b的最快，输一场；
三、如果a的最慢速度等于b的最慢，则：
1.如果a的最快速度大于b的最快，则直接a的最快与b的最快进行比赛，赢一场；
2.如果b的最快速度小于b的最快，则用a的最慢浪费b的最快，输一场；
3.如果a的最快速度等于b的最快，即a与b的最慢与最快分别相等，则：
a.如果a的最慢速度小于b的最快，则用a的最慢浪费b的最快，输一场；
b.如果a的最慢速度等于b的最快，即a的最慢、a的最快、b的最慢、b的最快相等，
说明剩余未比赛的马速度全部相等，直接结束比赛。
*/

int main(int argc, char** argv) {
	int n;
	int a[1001];
	int b[1001];
	while(cin >> n && n != 0){
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		sort(b, b + n);
		
		int al = 0, ah = n - 1;
		int bl = 0, bh = n - 1;
		int ans = 0;
		
		while(al <= ah && bl <= bh){
			if(a[al] > b[bl]){
				al++;
				bl++;
				ans += 200;
			}
			else if(a[al] < b[bl]){
				al++;
				bh--;
				ans -= 200;
			}
			else{
				if(a[ah] > b[bh]){
					ans += 200;
					ah--;
					bh--;
				}
				else if(a[ah] < b[bh]){
					ans -= 200;
					al++;
					bh--;					
				}
				else{
					if(a[al] < b[bh]){
						ans -= 200;
						al++;
						bh--;
					}
					else{
						break;
					}
				}
			}
			
		}
		cout << ans << endl;
	}
	return 0;
}
