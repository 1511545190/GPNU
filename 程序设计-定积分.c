#include <stdio.h>
//定积分 梯形法
//划分区间 h = (b-a)/n
// df = [f(a)+f(a+h)]*h/2 + [f(a +h)+f(a+2h)]*h/2 + .....+[f(b-h)+f(b))]*h/2
//      =h/2*[fa + fah + fah + fa2h + fa2h +...]
// S = h/2*[f(a) + f(b)] + 1-->n-1Ef(a+ih)]   // a+ n*h = b
double F(double a,double b,double (*f)(double),long n){
    double sum = f(a)+f(b);
    double h = (b-a)/n;
    for(long i = 1;i<n-1;i++){
        sum+=f(a+i*h);
    }
    return sum*h;
}
double x(double a){
    return a;
}
#include <math.h>
double fun(double x){  //复合函数
    return cos(sin(x*2))+ x;
}

int main(void)
{
    printf("x 0 -> 1:%.2f ",F(0,1,x,10000));
    printf("sinx 0 -> 1:%.2f ",F(0,1,fun,10000));

    
    
    return 0;
}