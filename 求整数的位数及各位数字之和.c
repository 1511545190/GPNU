#include <stdio.h>
int main()
{
    /*
    对于给定的正整数N，求它的位数及其各位数字之和。
    输入格式：
    输入在一行中给出一个不超过10 ^9
    的正整数N。
    输出格式：
    在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。
    */
    int N;
    int digit;
    int sum = 0;
    scanf("%d",&N);
    
    int i;
    while(N>0)
    {
        i++;
        digit = N%10;
        sum +=digit;
        N/=10;
    }
    printf("%d %d",i,sum);
    
    
    
    

    
    
    
    return 0;  
}
