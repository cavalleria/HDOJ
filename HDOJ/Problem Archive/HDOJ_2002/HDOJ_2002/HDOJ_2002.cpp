// HDOJ_2002.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;
#include <iostream>
#include<iomanip>
const double PI=3.1415927;
int main()
{
    double r,v;
    while(cin>>r)
    {
        v=4*PI*r*r*r/3;
        cout<<setiosflags(ios::fixed)<<setprecision(3)<<v<<endl;
    }
}

