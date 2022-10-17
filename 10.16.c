#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
    //while语句计算圆周率的近似值。（直到累加项的绝对值小于 0.00001 ）
    //公式 : pi /4 ≈1-1/3+1/5-1/7 ....... 
    double pi =0;
    int deno =1;
    int sign =1;
    
    while(fabs(1.0/deno )>= 0.00001)  //控制精度
    {
        //deno*=sign;  不可变deno一直是正！！！！！！！！！！！！！！！！！！！！！！！！！！
        pi += 1.0/deno*sign;
        deno +=2;
        sign*=-1;//改号
    }
    pi*=4;
    printf("%f",pi*4);

    system("pause");
        return 0;
}