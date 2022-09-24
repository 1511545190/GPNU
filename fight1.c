#include <stdio.h>

int max_3(int a, int b, int c);//3数求最大
int main(void)
{
    int a,b,c;
    a = max_3(a,b,c);
    printf("%d",a);

    
    return 0;
}
int max_3(int a,int b,int c)
    {
        scanf("%d,%d,%d",&a,&b,&c);
        int z = a;
        if (a<b) z =b;
        if (z<c) z =c;
        return z;
        
    }