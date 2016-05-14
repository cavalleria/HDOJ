#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    
    char a, b, c;
    while(cin >> a >> b >> c){
    
        if(a <= b)
        {
            if(b <= c)
            {
                cout << a << " " << b << " " << c << endl;
            }
            else if(a <= c)
            {
                cout << a << " " << c << " " << b << endl;
            }
            else
            {
                cout << c << " " << a << " " << b << endl;
            }
        }
        else
        {
            if(a <= c)
            {
                cout << b << " " << a << " " << c << endl;
            }
            else if(b <= c)
            {
                cout << b << " " << c << " " << a << endl;
            }
            else
            {
                cout << c << " " << b << " " << a << endl;
            }
        }
    }
 
    return 0;
}
