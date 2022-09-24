/*
宏定义
变量
printf
*/


#include <stdio.h>
//#define 符号常量 宏定义
#define START printf("Hello");
#define F for
int main(void)
{
    
    F(int i = 0;i < 10;i++)
    {
        START
        printf("%d\n",i);
    }
    START;






    return 0;
}
/*ANSI C*/

/*
变量名：
字母 + 数字 +下划线
_sdf
_232dsf
fsf_fdsf9
开头只能用数字或下划线
*/

/*
前缀long short 
signed 默认选项 ，第一位如果是1 则为signed ，
    0 则为unsigned 可全部用来存储数据
unsigned %u
字符类型char 
整型int
单精度浮点型float
双进度浮点型double



bool类型 Bool
数组类型
int[]
char[]
结构类型struct

sizeof 运算符

enum
 */

/* \0 转义字符表示字符串到此为止 */

