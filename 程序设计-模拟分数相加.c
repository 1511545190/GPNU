#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 101
int max_fact(int a, long b){
    return a%b? max_fact(b,a%b): b;
}
//求一组数的最小公倍数
//ab = qp         q= ab/p
int arry_maxnumber(int a[],int n)
{
    ///初始化第一组公倍数
    int retin=a[1];
    for(int i = 1;i<n;i++)  //从index =1开始
    {
        retin = a[i]*retin/max_fact(retin,a[i]);//两组的最小公倍数       
    }
    return retin;
}
int main()
{
    int deno=0;//
    long mole=0;//

    int sum_d[N]={0};
    long sum_mole[N]={0};

    int n;
    scanf("%d",&n);

    int fact=1;
    //输入数据
    for(int i=0;i<n;i++){
        scanf("%ld/%d",&mole,&deno);
        sum_d[i]=deno;
        sum_mole[i]=mole;        
    }

    int min_arry;
    mole = 0;
    for(int i=0;i<n;i++){
        min_arry = arry_maxnumber(sum_d,n);//找出最大的公倍数
        //将分母换成最小公倍数之后，分子也要改变，以保持等价
        int melo_k = min_arry/sum_d[i];

        //累加分子
        mole += sum_mole[i]*melo_k;            
    }
    deno=min_arry;

    if(deno==1)
    printf("%ld\n",mole);
    else {
        int temp = max_fact(deno,mole);
        //约分
        deno/=temp;
        mole/=temp;
        if(mole%deno==0)         //可化简
        printf("%d\n",mole/deno);
        else if(mole<deno)
        printf("%ld/%d",mole,deno);  //真分数
        else
        printf("%d %d/%d",mole/deno, mole%deno,deno);  //假分数
    }
    
}
