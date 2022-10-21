   
#include <stdio.h>
int main()
{
    /*
    兔子时间加速法
    */
    int rab = 0;
    int i;
    int T;
    scanf("%d",&T);
    //T =242;
    for( i= 1;i<=T;i++)
    {
        rab+=9;           //在判断之前要跑完10分钟
        if(i%10==0&&rab>i*3)
        {
            i+=30;//停了又跑           
            continue;
        }
           //9min/s
    }
    //printf("%d",i); //可能已经加了30，所以不能用i来计算乌龟
    if(3*T>rab)printf("@_@ %d",T*3);
    else if(3*T==rab)printf("-_- %d",T*3);
    else printf("^_^ %d",rab);
    
    
    return 0;  
}
