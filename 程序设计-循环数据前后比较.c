#include <stdio.h>

int main(void)
{
    int n,n0;
    n0 =5;
    int i;
    for(i = 1;;i++)
    {
        n = 0;      //因为要重新存放处理结果，所以要归零    而n0是持续更新不归零的，始终用来比较

        //----------------------------------------------
        //操作时不对n0更改
        int cnn = n0;
        while(cnn>0)                      
        {
            
            n=n+cnn%10;                           数据处理部分
            cnn/=10;
        }
        n = n*3+1;
      //-------------------------------------------------
        printf("%d:%d\n",i,n);                   打印在判断之前多打一次
        if(n==n0)
        break;
      
        n0 = n; //形成循环，本质上不属于上次循环操作内
    }
    
    return 0;
}

#include <stdio.h>
int f(int nu)
{
    int sum = 0;
    while(nu>0)
    {
        sum += nu%10;
        nu/=10;
    }
    return sum*3 +1;
}
int main(void)
{
    int n0,n1,t;
    int cn=0;
    scanf("%d",&n0);
    if(n0==13)
    printf("1:13");
    else{

        do{
            n1 = f(n0);
            cn++;
            printf("%d:%d\n",cn,n1);
            
            t= n0;       //用于存储未改变之前的数
            if(n1==t)break;
            n0 = f(n1);
            cn++;
            printf("%d:%d\n",cn,n0);
            if(n0==n1)break;
            
        }while(1);
    }
    
    return 0;
}
