#include<iostream>
#include<string>
using namespace std;

int main(){	
	string str;	
	int T;	
	(cin >> T).get();	
	while(T--){		
		int begin, end;	
		getline(cin, str);	   
		begin = end = 0;
		
		//若有空格 
		for(int i = begin; i < str.size(); i++){
			if(str[i] == ' '){
				end = i;
				for(int j = end - 1; j >= begin; j--){
					cout << str[j];
				}
				
			    cout << " ";	
				begin = end + 1;	
			}	
		}
		
		//若没有空格 
		for(int k = str.size() - 1; k >= begin; k--)	
			cout << str[k];	
		cout << endl;	
	}
	return 0;
}	
