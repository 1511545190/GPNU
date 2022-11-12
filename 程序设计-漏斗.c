//注意%d%c %c 会读空格
#include <stdio.h>
int main()
{
    int input;char ch;
    scanf("%d %c",&input,&ch);//注意空格！！！
    int assert=0;
    for(int i=0;input!=0;i++){  //若可以 则 n^2 +1
        if(input<2*pow(i,2))//
        {
            //余数        keyide
            assert = input -(2*pow(i-1,2)-1);
            break;
            
        }
    }
    
    
    input = input -assert;
    input++;input/=2;
    int cnn = 0;
    int n =0;
    int sum = 0;
    while(sum<input)  //判断行数要多少
    {
        cnn+=2;
        sum+=cnn;    
        
        n++;
    }
    //第一次打印用
    int j,k;
    for(j=0;j<n;j++)
    {
        //打印空白
        for(k=0;k<j;k++)
        {
            printf(" ");
        }
        for(k=0;k<2*(n-j)-1;k++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    n--;
    for(j=0;j<n;j++)
    {
        //blank
        for(k=n-1;k>j;k--)
        {
            printf(" ");
        }
        for(k=0;k<2*(j+2)-1;k++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    if(assert)printf("%d",assert);
    
}
