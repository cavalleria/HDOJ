#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int UP = 6;   
 	const int DOWN = 4;  
 	const int STOP = 5; 
 
	int n;
	while(cin >> n && n){
		int sec = 0, tmp; 
		int floor;
		cin >> floor;
		tmp = floor;
		sec = floor * UP + STOP;
		for(int i = 1; i < n; ++i){  
		    cin >> floor;  
		    if(floor > tmp) //�����������   
		    	sec += (floor - tmp) * UP + STOP;   
		    else  //��������   
		    	sec += (tmp - floor) * DOWN + STOP;  
		    tmp = floor;//��¼����Ŀ��㣬������һ��Ŀ���ļ���   
	    }  
    	cout << sec << endl;
	}
	return 0;
}
