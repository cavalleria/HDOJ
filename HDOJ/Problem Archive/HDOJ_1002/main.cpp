#include <iostream>  
#include <cstring>
#include <stack>  
using namespace std;  
  
stack<int> s1;  
stack<int> s2;  
stack<int> s3;  
char c1[1000];  
char c2[1000];  
int cases = 0;
  
int main(int argc, char** argv){  
	int T;
	cin >> T;
	int x =T;
	while(T--){
		cin >> c1;  
    	cin >> c2;  
	    int len1 = strlen(c1);  
	    int len2 = strlen(c2);  
	    for(int i = 0; i < len1; i++) {  
	        s1.push(c1[i] - '0');            //按输入顺序（高位到低位）入栈1，此时栈顶为最低位  
	    }  
	    for(int i = 0; i < len2; i++){   
	        s2.push(c2[i] - '0');            //按输入顺序（高位到低位）入栈2，此时栈顶为最低位  
	    }  
	  
	    int tmp = 0;  
	    while(!s1.empty() && !s2.empty()){ 
	      
	        tmp += s1.top() + s2.top();   // 将栈1、栈2均pop出栈顶做加法，并考虑进位，结果入栈3，这时栈3正好是低位入栈  
	        s1.pop();  
	        s2.pop();  
	        s3.push(tmp % 10);  
	        tmp = tmp / 10;  
	    }  
	    
	    while(!s1.empty()){   //处理多余的栈1  
	        tmp += s1.top();  
	        s1.pop();  
	        s3.push(tmp % 10);  
	        tmp = tmp / 10;  
	    }  
	    
	    while(!s2.empty()){   //处理多余的栈2  
	        tmp += s2.top();  
	        s2.pop();  
	        s3.push(tmp % 10);  
	        tmp = tmp / 10;  
	    }  
	    
	    if(tmp){       //处理多余的进位  
	        s3.push(tmp);  
	    }  
	    cases++; 
	  	cout << "Case " << cases << ":" << endl;
	    cout << c1 << " + " << c2 << " = ";
	    while(!s3.empty()){   //直接pop出栈3，即正好的从高位到低位的结果  
	    	
	        cout << s3.top();  
	        s3.pop();  
	    } 
	    
		if(cases == x){
			cout << endl; 
		} 
		else{
			cout << endl << endl;
		}
	} 
    return 0;  
}  
