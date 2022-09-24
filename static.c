/*
整数常量
    前缀：0x 或 0X 十六进制，0 表示八进制
    后缀是 U 和 L 的组合，U(u) 无符号整数（unsigned），L(l) 长整数（long）
*/
#include <stdio.h>

/*函数声明*/
void fun1(void);
static int count = 10;  /*全局变量 -默认static */

int main()
{
    while (count--)
    {
        fun1();
    }
    return 0;
}

void fun1(void)
{
    /*thing 只初始化一次
    */
   static int thing = 5;
   thing++;
   printf("thing: %d, count %d\n", thing,count);
}