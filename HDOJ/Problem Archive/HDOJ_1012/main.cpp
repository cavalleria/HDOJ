#include <iostream>  
#include <iomanip> 
using namespace std;  
int factor[10] = {1,1};
double e[10]={1};    
int main()
{  
    int n;  
    for(int i = 2; i <= 9; ++i){ 
        factor[i] = factor[i - 1] * i;  
    }  
    cout << "n e" << endl  
         << "- -----------" << endl; 
    for(int i = 1; i <= 10; ++i){  
           e[i] = e[i-1] + double(1.0) / factor[i];  
           if(i == 8){   
            cout << i - 1 << " " << setprecision(10) << setiosflags(ios::showpoint) <<  e[i-1] << endl;  
           }   
           else{  
               cout << i - 1 << " " <<  setprecision(10) << e[i-1] << endl;  
           }  
    }  
    return 0; 
} 
