#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	cin >> n;
	while(n--){
		int a[6];
		int res[3];
		for(int i = 0; i < 6; i++){
			cin >> a[i];
		}
		
		res[0] = a[2] + a[5];
		res[1] = a[1] + a[4];
		res[2] = a[0] + a[3];
		
		if(res[0] >= 60){
			res[1] += 1;
			res[0] -= 60;
		}
		if(res[1] >= 60){
			res[2] += 1;
			res[1] -= 60;
		}
		
		for(int i = 2; i >= 0; i--){
			if(i == 0){
				cout << res[i] << endl;
			}
			else{
				cout << res[i] << " "; 
			}
		}
	}
	return 0;
}
