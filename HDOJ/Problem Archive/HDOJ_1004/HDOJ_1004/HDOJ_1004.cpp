// HDOJ_1004.cpp : �������̨Ӧ�ó������ڵ㡣
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
        string *b=new string[n];	//ball��ԭʼ���� 
		string *a=new string[n];	//���࣬ball������ 
        int *c=new int[n];	//��¼count������ 
        int point=0;	//��¼count��ָ�� 
        for(int i = 0; i < n; i++)
			c[i]=0;
		for(int  i= 0; i < n; i++)
		{
			cin >> b[i];
                         //�Ƚ��ظ��ģ�����ͳ�� 
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