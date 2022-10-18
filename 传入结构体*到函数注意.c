#include <stdio.h>
#include <stdlib.h>
typedef struct  a
{
    int a;
}A;
void change(A*in)     //依然属于传值；结构体指针相当于形参
{
    A *in2;//只有指针没有空间不可访问
    in2 = (A*)malloc(sizeof(A));
    in2->a = 2000;
    in = in2;       //依然是传值不能达到效果
    in->a = 1999;   //依然不能更改
}
int main(void)
{
    A in;
     in.a =1;
    change(&in);
    printf("%d\n",in.a);
    
    return 0;
}
