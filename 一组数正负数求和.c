//1 - 1/2 + 1/3 - 1/4 ...... 1/10= 
#include <stdio.h>
#include <stdio.h>

int main(void)
{
    void sum1();//for 循环 且用 sign 改号 算法
    void sum1_2();// for循环省略 deno 用 sign改号
    void sum1_3();// for循环 只使用sum 条件改号
    
    
    return 0;
}





void sum(void)//for 循环 且用 sign 改号 算法
{
    /* 首先分析元素：符号在变 分母在变 总值需要一个量来存储 */
    float deno = 2;
    float sum = 1;
    int sign = -1;
    for(int i = 1;i <100;i++)
    {
        sum += (1/deno)*sign;
        printf("sum:%.3f\n",sum);
        deno =deno +1;
        printf("deno:%.3f\n",deno);
        sign*= -1;
        
    }
    printf("sum:%f",sum);
    
    /* 总结：运用-1改号时
a0 应为负数 ，否则循环内将不能方便地改号
数字变大 是绝对值变大 

 */

}


void sum1_2(void)// for循环省略 deno 用 sign改号
{
    float sign =1;
    float sum =0;
    for(float i=1;i<=100;i++)
    {
        
        printf("i*sign  %f\n",1/i*sign);
        sum += (1/i)*sign;
        printf("sum :%f",sum);
        sign *= -1;


    }
    printf("sum:%f",sum);
/* 总结：运算时每个变量的类型都要统一才不会出现错误， 如上 for 中的 i 若 int 则结果错误 */
}



void sum1_3(void)//使用条件语句求和
{
    float sum =0;
    for(float i = 1; i< 101; i++)
    {
        if((int)i%2 == 0)        //求模必须使用整形
        {
            sum+= 1/i*-1;
        }
        else sum+= 1/i;
    }   

    printf("%f",sum);
    

}