#include<stdio.h>

//判断多少位数-1 /10进制专用
int cnn(int number);  
//pow  注意0的情况
int pow(int a,int x);
//取出数字，判断奇偶位 && > ||
int biary(int input);
//转换后 变成十进制
int change(int b);

int main()
{
    int a;
    scanf("%d",&a);
    a = biary(a);
    
    a = change(a);
    printf("%d",a);
}
int biary(int a)
{
    int c = cnn(a);
    
    int sum = 0;
    int n = c+1;
    c = pow(10,c);
    while(a>0)
    {
        
        int d = a/c;
        if(d%2 == 0&&n%2 == 0||d%2!=0&&n%2!=0)
        {
            d =1;
        }
        else d =0;
        a%=c;
        n--;
        c/=10;
        sum = sum*10 + d;


    }
    return sum;
}
int cnn(int number)
{
    int ret =0;
    while(number>9)//十进制专用
    {
        ret++;
        number/=10;
    }
    return ret;
}
int pow(int a, int x)
{
    if(x == 0) return 1;  //任何数的0次方都是1
    int p = a;
    for(int i =1;i<x;i++)
    {
        a*=p;
    }
    return a;
}
int change(int a)
{
    int i =0;
    int sum = 0;
    while(a>0)
    {
        
        int digit = a%10;
        a/=10;
        sum += digit*pow(2,i);
        i++;
    }
    
    return sum;
}