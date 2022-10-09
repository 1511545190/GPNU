#include <stdio.h>

int main(void)
{
    //整数逆序
    int a;
    int ret = 0;
    scanf("%d",&a);

    while(a != 0)
    {
        
        ret *=10;
        ret += a%10;
        a /= 10;
    }
    printf("%d",ret);

    
   
    
    return 0;
}