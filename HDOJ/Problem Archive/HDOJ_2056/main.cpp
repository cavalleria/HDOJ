#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double Max(double a, double b){
	return a > b ? a : b;
}
double Min(double a, double b){
	return a < b ? a : b;
}

int main(int argc, char** argv) {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
		int t;
		double area = 0.0;
		if(x1 > x2){ t = x1; x1 = x2; x2 = t; }
		if(y1 > y2){ t = y1; y1 = y2; y2 = t; }
		if(x3 > x4){ t = x3; x3 = x4; x4 = t; }
		if(y3 > y4){ t = y3; y3 = y4; y4 = t; }
		
		double width = Min(x2, x4) - Max(x1, x3);
		double height = Min(y2, y4) - Max(y1, y3);
		if(width < 0 || height < 0){
			area = 0;
		}
		else{
			area = width * height;
		}
		
		
		cout << fixed << setprecision(2) << area << endl;
		
	}
	return 0;
}
