#include <stdio.h>  
#include <string.h>  
#define N 100000  
int main(void)  
{  
    char a[N] = {0}, b[N] = {0};  
    while(scanf("%s%s", &a, &b) != EOF)  
    {  
        char * p1 = strchr(a, '.');  
        char * p2 = strchr(b, '.');  
        char * pa = a + strlen(a) - 1;  
        char * pb = b + strlen(b) - 1;  
        if(pa > p1 && p1 != NULL)  
        {  
            while(*pa == '0')  
                *pa-- = 0;  
        }  
        if(pb > p2 && p2 != NULL)  
        {  
            while(*pb == '0')  
                *pb-- = 0;  
        }  
        if(*pa == '.')  
            *pa = 0;  
        if(*pb == '.')  
            *pb = 0;  
        pa = a;  
        pb = b;  
        while(*pa == '0')  
            pa++;  
        while(*pb == '0')  
            pb++;  
        if(strcmp(pa, pb) == 0)  
            printf("YES\n");  
        else  
            printf("NO\n");  
    }  
    return 0;  
}
