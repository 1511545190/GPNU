#include <stdio.h>

int main(void)
{
    //运算优先级
    printf("-11%%5 = %d",-11%5);  //-1
    //取模实例
    //分离个位，百位
    printf("\n1232 = %d %d %d %d",1232/1000%10,1232/100%10,1232/10%10,1232%10);
    
    int a =1;
    printf(" a ++ ++%d",++a);
    return 0;

}