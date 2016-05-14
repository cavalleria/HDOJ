// HDOJ_2003.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
    double x;
    while(cin>>x)
    {   
        x=fabs(x);   
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<x<<endl;
    }
}
