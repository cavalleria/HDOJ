#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x, y, z, flag = 0;
	while((cin >> x >> y)){
		if (x == 0 && y == 0)
			break;
		for(int n = x; n <= y; n++){
			z = n * n + n + 41;
			for(int i = 2; i < z; i++){
				if(z % i == 0){
					flag = 0;
					break;
				}
				else{
					flag = 1;
					//break;
				}
			}
			
			if(flag == 0){
				break;
			}
		}
		
		if(flag){
			cout << "OK" << endl;
		}
		else{
			cout << "Sorry" << endl;
		}
	}
	return 0;
}
