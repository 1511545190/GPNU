#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //进制转换（  ）111111 = pow(2,6) - 1
    //一个字节byte有八位bit 11111111（最大值) unsigned 2^(8)
    /*整型，4 个字节，取值范围 -2147483648 到 2147483647*/
    // 用改符号位 取反 +1 来表示有符号整型，来解决 正负整形相加的问题 
    /*
    比如 -3，就是先将 10000011 按位取反（除了符号位），
    得到 11111100，再 +1 得到 11111101。
    这样就可以解决 3 + (-3) == 0 的问题了

    00000011 + 11111101 == 100000000，这里的结果是 9 位，对于一个字节单元来说，
    这左边的 1 是“溢出”的了，会被自动舍弃，因此结果就变成了 00000000。

    负数 1000000000，0越多说明值越大（因为其按位取反)

    */
printf("int \n",sizeof(int)); 
//4个字节 4*8 = 32 bit unsigned 2^(32)

int a =2147483647;
//溢出 从-2147483648 开始计算，每溢出1 值增加1, -2147483647
printf("%d",a);
printf("char %d\n",sizeof(char));
printf("\n",sizeof(float));//32位
printf("\n",sizeof(double));//64位
printf("\n",sizeof(long int));
printf("\n",sizeof(short int));    
    return 0;
}