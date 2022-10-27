#include <stdio.h>
int main()
{
    //模拟竖式计算
    int n,m,i=0,ret = 1;
    scanf("%d/%d",&n,&m);
     while(i<=200&&ret)      //精确到小数点后20位，则需要《=200，因为 输出个位使用了循环
    {
        
        printf("%d",n/m);
        ret = n%m;
        if(i==0)printf(".");
        n = ret*10;
        i++;
    }
}
