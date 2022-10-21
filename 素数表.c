#include <stdio.h>

int main(void)
{
/* 
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
输入格式:
两个整数，第一个表示n，第二个表示m。
输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
 */
    int m,n,sum = 0;
    int i,j;
    scanf("%d%d",&n,&m);
    int prime_number[200];
    for(j=2;i<200;j++)
    {
        int k =2;
        for(k;k<j;k++)
        {
            if(j%k==0)
            break;
        }
        if(k==j)
        {
            prime_number[i] = j;
            i++;
        }
    }
    for(i=n-1;i<m;i++)
    {
        sum+= prime_number[i];
    }
    printf("%d",sum);
    

    
    return 0;
}
