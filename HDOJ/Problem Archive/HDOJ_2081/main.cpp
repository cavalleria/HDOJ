#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	char a[11], b[6];
	cin >> n;
	while(n--){
		for(int i = 0; i < 11; i++){
			cin >> a[i];
		}
		
		for(int i = 0; i < 6; i++){
			b[i] = a[i + 5];
			
		}
		b[0] = '6';
		
		for(int i = 0; i < 6; i++){
			cout << b[i];
		}
		cout << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int T;
    cin >> T;
    while ( T -- )
    {
           string t;
           cin >> t ;
           string num ( t, 6, -1);
           cout << num << endl;
           cout << "6" + num << endl;
    }
    return 0;
}
