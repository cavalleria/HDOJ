// HDOJ_1004.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
		if (n == 0) break;
        string *b=new string[n];	//ball的原始数组 
		string *a=new string[n];	//种类，ball的种类 
        int *c=new int[n];	//记录count的数量 
        int point=0;	//记录count的指针 
        for(int i = 0; i < n; i++)
			c[i]=0;
		for(int  i= 0; i < n; i++)
		{
			cin >> b[i];
                         //比较重复的，进行统计 
			int flag = 0;
			int j = 0;
			for(; j < point; j++)
				if(b[i] == a[j])
				{
					c[j]++;
					flag = 1;
					break;
				}
				if(flag == 0)
				{
					a[j] = b[i];
					c[j]++;
					point++;
				} 
		}
		int max = 0;
		int index = -1;
		for(int i = 0; i < point; i++)
			if(max < c[i])
			{
				max = c[i];
				index = i;
			}
			cout << a[index] << endl;
			delete [] b;
			delete [] a;
			delete [] c;
	}
	return 0;
}