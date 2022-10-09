#include <stdio.h>
//辗转相除法
int main(void)
{
    int a = 12;
    int b = 32;
    int t;
    while(b!=0)
    {
        t = a%b;
        a =b;
        b = t;
    }
    printf("%d",a);
    
    return 0;
}