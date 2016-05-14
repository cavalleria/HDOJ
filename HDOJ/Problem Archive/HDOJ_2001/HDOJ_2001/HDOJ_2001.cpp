// HDOJ_2001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
#include<iostream>
#include<cmath> 
#include<iomanip>
int main()
{
    double x1,y1,x2,y2,d;
    while(cin>>x1>>y1>>x2>>y2)
    {
        d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<d<<endl;
	} 
}

