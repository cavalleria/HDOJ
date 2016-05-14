#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//最大字段和问题 
int main(int argc, char** argv) {
	int T;
	cin >> T;
	int flag = T;
	int cases = 0;
	while(T--){
		int n;
		cin >> n;
		int a[100001];
		int max = -100000;
		int sum = 0;
		int b = 0, t = 0, besti = 0, bestj = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			
			if(sum >= 0){
				sum += a[i];
			}
			else{
				sum = a[i];
				t = i;
			}
			
			if(sum > max){
				max = sum;
				besti = t;
				bestj = i;
			}
		}
		
		cases++;
		cout << "Case " << cases << ":" << endl;
		cout << max << " " << besti + 1 << " " << bestj + 1;
		if(cases == flag){
            cout << endl; 
        } 
        else{
            cout << endl << endl;
        }
	}
	return 0;
}
