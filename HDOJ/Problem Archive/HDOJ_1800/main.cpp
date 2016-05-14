/* 一般解法 
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int n, max, t;
	int a[3005];
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		max = 1;
        t = 1;
        for(int i = 1; i < n; ++i){
            if(a[i] != a[i - 1]){
            	t = 1;
			}
            else{
            	t++;
			}
            if(t > max){
            	max = t;
			}   
        }
        cout << max << endl;
	}
	return 0;
}
*/
/*  STL中map
#include <iostream>
#include<map>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    while(cin >> n)
    {
        int i;
        map<int, int> mp;
        int max = INT_MIN;
        for(i = 0; i < n; i++)
        {
            int level;
            cin >> level;
            mp[level]++;
            if(mp[level] > max)
            {
                max = mp[level];                     
            }
        }
        cout << max << endl;
    }
    return 0;
} 
*/

#include<iostream>
#include <algorithm>
#include<limits.h>
#include<string.h>
#include<string>
#include<stdio.h>
using namespace std;
int n;
int Hash[3010];
char str[40];
int BKDRHash(char* s)
{
    long long seed = 131;
    long long hash = 0;
    while(*s == '0')s++;//这点很重要，因为0000345645和34564是一个数，但是如果不处理的话会对应到不同的Hash值
    while(*s)
    {
        hash=hash * seed + (*s++);
    }
    return (hash & 0x7FFFFFFF);
}
 
int main()
{
    int i, ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans = 1;
        for(i = 0; i < n; i++){
			scanf("%s",str);
			Hash[i] = BKDRHash(str);
		}
		
		sort(Hash, Hash + n);
		int temp = 1;
		for(i = 1; i < n; i++){
			if(Hash[i] == Hash[i - 1]){
				temp++;
				if(temp >= ans){
					ans = temp;
				}	
            }
            else{
            	temp = 1;
			}
        }	
       printf("%d\n", ans);
    }
    return 0;
}


