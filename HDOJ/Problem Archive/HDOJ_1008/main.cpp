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
		    if(floor > tmp) //如果电梯往上   
		    	sec += (floor - tmp) * UP + STOP;   
		    else  //电梯往下   
		    	sec += (tmp - floor) * DOWN + STOP;  
		    tmp = floor;//记录本次目标层，方便下一个目标层的计算   
	    }  
    	cout << sec << endl;
	}
	return 0;
}
