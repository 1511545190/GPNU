//反复从键盘输入一个整数，如果大于或等于零，累加求和，直到输入负数结束。然后求出平均值并输出。
#include<stdio.h>
int main()
{
int sum = 0; 
int n ;
int cn = 0;
do{

scanf("%d",&n);
cn ++;
sum +=n;

}while(n>=0);   //do出口时，循环的次数是条件执行数+1
printf("AVE=%.2f\n",1.0*sum/cn-1);
return 0;
}