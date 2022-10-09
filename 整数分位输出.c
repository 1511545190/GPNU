#include <stdio.h>

int main(void)
{
    int number = 78945; int n2 = number;  int n;
    int pow = 1; 
    //判断位数 用while，防止个位数错误
    while(number>9){
        number/= 10;
        printf("number:%d\t",number);
        pow *= 10;
        printf("pow:%d\n");
    }  //得到位数:等于零会全部撇完 >9 -> >=10

    do{
        n = n2/pow;  //得到最高位数字
        n2%=pow;    //去掉最高位数字
        pow/=10;
        printf("%d",n);
        if(pow >0)
        {
            printf("-");
        }
    }while(pow>0);  //最后剩下一位数 ，一位数仍然要/1 的出来，最后pow/10 = 0
    

    
    
    return 0;
}