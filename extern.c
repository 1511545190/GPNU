#include <stdio.h>
//声明变量
/*其中，变量在头部就已经被声明，但是定义与初始化在主函数内*/
int x;
int y;
int add_two()
{
    //声明变量为外部变量
    extern int x;
    extern int y;
    //初始化
    x = 1;
    y = 2;
    return x + y;
}

int main()
{
    int result;
    //调用函数
    result = add_two();
    printf("Result:%d", result);
    return 0;
}