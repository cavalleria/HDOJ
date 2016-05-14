#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char str[1000];
int sumOfDigits(int n){
    int sum = 0;
	    do{
	        sum += n % 10;
	        n /= 10;
	    }while(n != 0);
	return sum;
}
    
int main(int argc, char** argv) {
	int num;
	while(scanf("%s", str), str[0] - '0'){
        int s = 0;
		for(int i = 0; str[i] != '\0'; ++i)
			s += str[i] - '0';
		int res = s;
		
        while(res % 10 != res){
            res = sumOfDigits(res);
        }
        cout << res << endl;
	}
	return 0;
}

