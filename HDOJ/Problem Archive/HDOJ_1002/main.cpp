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
	        s1.push(c1[i] - '0');            //������˳�򣨸�λ����λ����ջ1����ʱջ��Ϊ���λ  
	    }  
	    for(int i = 0; i < len2; i++){   
	        s2.push(c2[i] - '0');            //������˳�򣨸�λ����λ����ջ2����ʱջ��Ϊ���λ  
	    }  
	  
	    int tmp = 0;  
	    while(!s1.empty() && !s2.empty()){ 
	      
	        tmp += s1.top() + s2.top();   // ��ջ1��ջ2��pop��ջ�����ӷ��������ǽ�λ�������ջ3����ʱջ3�����ǵ�λ��ջ  
	        s1.pop();  
	        s2.pop();  
	        s3.push(tmp % 10);  
	        tmp = tmp / 10;  
	    }  
	    
	    while(!s1.empty()){   //��������ջ1  
	        tmp += s1.top();  
	        s1.pop();  
	        s3.push(tmp % 10);  
	        tmp = tmp / 10;  
	    }  
	    
	    while(!s2.empty()){   //��������ջ2  
	        tmp += s2.top();  
	        s2.pop();  
	        s3.push(tmp % 10);  
	        tmp = tmp / 10;  
	    }  
	    
	    if(tmp){       //�������Ľ�λ  
	        s3.push(tmp);  
	    }  
	    cases++; 
	  	cout << "Case " << cases << ":" << endl;
	    cout << c1 << " + " << c2 << " = ";
	    while(!s3.empty()){   //ֱ��pop��ջ3�������õĴӸ�λ����λ�Ľ��  
	    	
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
