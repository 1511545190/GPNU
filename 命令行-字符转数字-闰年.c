#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100
int main(int argc , char *argv[])   //2022年11月15日
{
    /* 判断闰年 */ //命令行传参数实现
    if(!argv[1])printf("Need a paramater \n");
    //将字符转化为数字 48 - 0
    //if(argv[1])printf("strlen(argv[1]: %d",strlen(argv[1]));可以用strlen
    if(argv[1])

    {
    int digit, sum = 0;
    int count = pow(10,strlen(argv[1])-1);
    for(int i=0;i<=strlen(argv[1]);i++)
    {
        digit = 0;
        if(argv[1][i]>='0'&&argv[1][i]<='9')
        digit = argv[1][i] - 48;  // 0 --- 48    n   ---- n-48
        sum += count*digit;
        count/=10;
    }
    int year = sum; 

   if(year%400!=0&&year%4==0||year%400==0) printf("%d is leap year\n",sum);
   else printf("%d is no leap year\n",sum);
    }    



    int num[MAX+1];
    /* 素数筛子除了1和它本身外，不能被其他自然数整除 */
    memset(num,0,sizeof(num));  //智能 2/-1 ，字符填充
    for(int i=2;i<MAX+1;i++){      //2以后的因数都被筛掉了
        for(int j=2;i*j<MAX+1;j++) //从2倍开始,若1倍则全都划掉了
        {
            num[i*j] = 1; //把a的倍数抹掉
        }
    }
    for(int i =2;i<MAX+1;i++)
    {
        if(num[i]==0)printf("Prime:%d\n",i);
    }
    return 0;
}
