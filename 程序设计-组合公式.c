/* 本题要求编写程序，根据公式C = m!/[(m-n)!n!]
 算出从n个不同元素中取出m个元素（m≤n）的组合数。
建议定义和调用函数fact(m)计算n!，其中n的类型是int，函数类型是double。

输入格式:
输入在一行中给出两个正整数m和n（m≤n），以空格分隔。

输出格式:
按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。

输入样例:
2 7
输出样例:
result = 21 */
#include <stdio.h>
//尾递归
double Fact(int n,int start){
    //n! = 1 , n =1,0;
    //n! = n!(n-1)!, n;
    if(n==1||n==0)
        return start;
    else
        return Fact(n-1,start*n);
}
int suma(int a,int sum){
    if(a==0)  //退出条件,也就是不进行操作的条件
        return sum;
    else// while a = 2,  inside a =1
        //              sum +2
        return suma(a-1,sum+a);
}
double Arrange(int n, int m){
    return Fact(n,1)/Fact(n-m,1);        // Am m = m!/（m-m)!
}
double Combination(int n, int m){
    return Arrange(n,m)/Fact(m,1);//Cm m = Am m / m!
}

#include<stdlib.h>
int main(){
    /* printf("%f", Fact(3,1));
    printf("\m%d", suma(3,0));//0 + 1 +2 +3
                            // sum + 1+2 +3  */
    int n= 3,m=1;
    printf("%f""\n",Combination(n,m));
    while(scanf("%d %d",&n,&m)!=2){
        printf("Invalid!Please Reinput:");
        fflush(stdin);
    }
    printf("%d %d =%.2f\n", n,m,Combination(n,m));
    
}
