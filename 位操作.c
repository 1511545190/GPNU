//位段
#include <stdio.h>
//通常用来处理单片机
struct U0{
    unsigned int leading :3;   //占3个bit
    unsigned int F1: 1;
    unsigned int F2: 1;
    int trailing :27;
    // 27 + 1 + 1 +3 = 32
};
int printB(int);//10 ->2
int main(void)
{
    struct U0 uu;
    uu.leading = 0b101;
    uu.F1=1;
    uu.F2 =0;
    uu.trailing = 0b11111;
    printf("size of uu %d\n",sizeof(uu));
    printB(*(int*)&uu);                   //将uu变成int型
    return 0;
}
int printB(int d)
{
    unsigned int u = 1u <<31;
    for(;u;u >>= 1)
    {
        //&时 d 自动转成 0b
        printf("%d",u&d?1:0);
    }
}
