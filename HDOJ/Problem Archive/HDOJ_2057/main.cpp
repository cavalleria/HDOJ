#include <iostream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long a, b;
	while(cin >> hex >> a >> b){
		long long c = a + b;
		
		if(c >= 0){
			cout << setiosflags(ios::uppercase) << hex << c << endl;  
		}
		else{
			cout << setiosflags(ios::uppercase) << hex << "-" << -c << endl;  
		}
		
	}
	return 0;
}