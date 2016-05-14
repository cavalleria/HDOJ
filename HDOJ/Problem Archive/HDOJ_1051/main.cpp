#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct stu{
	int l, w;
}Wood;

bool compare(Wood a, Wood b){
	if(a.l != b.l){
		return a.l > b.l;	//长度不等时按照长度排，从大到小排  
	}
	else{
		return a.w > b.w;	//长度相等时，再按照重量从大到小排列
	}
}


int main(int argc, char** argv) {
	int cases;
	Wood lw[5005];
	int flag[5005]; 
	int s;
	cin >> cases;
	while(cases--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> lw[i].l >> lw[i].w;
			flag[i] = 0; 
		}
		
		sort(lw, lw + n, compare);
		
		s = 0;
		
		for(int i = 0; i < n; i++)  
        {  
            if(flag[i]){
            	continue;
			}
            int min = lw[i].w;  
  
            for(int j = i + 1; j < n; j++)  
            {  
                if(lw[j].w <= min && !flag[j])  
                {  
                    min = lw[j].w;  
                    flag[j] = 1;  
                }  
            }  
            s++;  
        }  
        
        cout << s << endl; 
		
	}
	
	return 0;
}


