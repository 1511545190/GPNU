
#include<stdio.h>
int main()
{
  
 //while !10 = 0 !-10 = 0
//反复从键盘输入一个整数，如果大于或等于零，累加求和，直到输入负数结束。然后求出平均值并输出。
int sum = 0; 
int n ;
int cn = 0;
do{

scanf("%d",&n);
if(n<0)break;
cn++;
sum +=n;

}while(n>=0);   
printf("AVE=%.2f\n",1.0*sum/cn);
  
  
  
return 0;
}
