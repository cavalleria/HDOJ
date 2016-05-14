#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Ã∞–ƒŒ Ã‚ 
typedef struct{
	int j, f;
	double val;
}Node;

void bubbleSort(Node a[], int n){
	
	Node node;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j].val < a[j + 1].val){
                node = a[j];
                a[j] = a[j + 1];
                a[j + 1] = node;
            }
		}
	} 
}

bool compare(Node a, Node b){
	return a.val > b.val;
}
			
int main(int argc, char** argv) {
	int m, n;
	Node jf[1000];
	while(cin >> m >> n && m != -1 && n != -1){
		
		double sum = 0.0;
		
		for(int k = 0; k < n; k++){
			cin >> jf[k].j >> jf[k].f;
			jf[k].val = 1.0 * jf[k].j / jf[k].f;
		}
		
		//bubbleSort(jf, n);
		
		sort(jf, jf + n, compare);
		
		for(int k = 0; k < n; k++){
			if(jf[k].f <= m){
				sum += jf[k].j;
				m -= jf[k].f;
			}
			
			else{
				sum += 1.0 * m / jf[k].f * jf[k].j;
				break;
			}
		}
		
		cout << fixed << setprecision(3) << sum << endl;
			
	}
	return 0;
}
