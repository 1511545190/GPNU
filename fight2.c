//1 - 1/2 + 1/3 - 1/4 ...... 1/10= 
#include <stdio.h>

int main(void)
{
    int sign = 1;
    float sum =1;
    int deno =2;
    for(int i = 1; i <= 9;i++){
        deno*= sign;
        sum += (1/i);
        deno = deno +1;
        sign*= -1;
        
        printf("deno:%d,\n",deno);
    }
    printf("sum:%d",sum);
    

    return 0;
}