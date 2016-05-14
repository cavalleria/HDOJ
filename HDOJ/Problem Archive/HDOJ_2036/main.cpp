#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int x, y;
}point;

double area(point p,point q)
{
    return p.x * q.y - q.x * p.y;//叉乘计算面积的公式，简化的，是以(0,0)为起始点划分的
}

int main(int argc, char** argv) {
	int n;
	
	while(cin >> n && n != 0){
		point a[110];
		double sum;
		for(int i = 0; i < n; i++){
			cin >> a[i].x >> a[i].y;
		}
		
		sum = area(a[n - 1], a[0]);
		
		for(int i = 1; i < n; i++){
			sum += area(a[i - 1], a[i]);
		}
		
		sum /= 2;
		
		cout << fixed << setprecision(1) << sum << endl;
	}
	return 0;
}
