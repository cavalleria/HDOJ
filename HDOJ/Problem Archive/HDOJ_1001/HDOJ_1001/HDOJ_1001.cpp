// HDOJ_1001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream> 
using namespace std; 
int main() 
{ 
    __int64 n; 
    while( cin >> n) 
    {
        if (n % 2 == 1)
            cout<<(1+n)*n/2<<endl<<endl;
        else
            cout<<n/2*(n+1)<<endl<<endl;
    } 
}

