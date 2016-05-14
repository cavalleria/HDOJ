#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool isPrime(unsigned n)
{
    for(unsigned i = 2; i <= sqrt(n); ++i){ 
        if ( 0 == n % i ){         
            return false;
        }
    }
    return true; 
}

int main(int argc, char** argv) {
	int n;
	
	while(scanf("%d",&n) != EOF){
		int a;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a);
			if(isPrime(a)){
				cnt++;
			}
		}		
		printf("%d\n", cnt);	
	}
	return 0;
}

