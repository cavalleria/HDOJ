#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		int a[100];
		double sum = 0;
		double score = 0.0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		int max = a[0];
		int min = a[0];
		for(int i = 0; i < n; i++){
			if(a[i] > max){
				max = a[i];
			}
			if(a[i] < min){
				min = a[i];
			}
		}
		
		for(int i = 0; i < n; i++){
			sum += a[i];
		}
		score = (sum - max - min) / (n - 2);
		cout << fixed << setprecision(2) << score <<endl;
	}
	return 0;
}
