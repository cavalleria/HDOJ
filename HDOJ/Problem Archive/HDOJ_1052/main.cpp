#include <iostream>
#include <algorithm>
using namespace std;
/*
̰�Ĳ��ԣ�
һ�����a�������ٶȴ���b����������ֱ��a��������b������������Ӯһ����
�������a�������ٶ�С��b������������a�������˷�b����죬��һ����
�������a�������ٶȵ���b����������
1.���a������ٶȴ���b����죬��ֱ��a�������b�������б�����Ӯһ����
2.���b������ٶ�С��b����죬����a�������˷�b����죬��һ����
3.���a������ٶȵ���b����죬��a��b�����������ֱ���ȣ���
a.���a�������ٶ�С��b����죬����a�������˷�b����죬��һ����
b.���a�������ٶȵ���b����죬��a��������a����졢b��������b�������ȣ�
˵��ʣ��δ���������ٶ�ȫ����ȣ�ֱ�ӽ���������
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
