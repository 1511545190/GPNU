#include <stdio.h>
#include <math.h>
double disten(double,double,double,double);
int is_triangle(double a,double b, double c);
int main()
{
    
    double x1,y1,x2,y2,x3,y3;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    double a = disten(x1,y1,x2,y2);
    double b = disten(x1,y1,x3,y3);
    double c = disten(x2,y2,x3,y3);
    
    
    double s;
    double area;
    s = (a+b+c)/2;
    
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(is_triangle(a,b,c))
    {
        printf("L = %.2f, A = %.2f\n",a+b+c,area);
    }
    else
    {
         printf("Impossible\n");
    }
       
}
int is_triangle(double a,double b,double c)
{
   // int flag;
    //(a+b>c&& a+c>b&& b+c>a)?flag = 1: flag =0; //不能写成 flag =1：flag=0；
    //并且flag =1:0是一个语句，只会执行这个
    //如果条件为真 ? 则值为 X : 否则值为 Y
    return (a+b>c&& a+c>b&& b+c>a)?1:0;
    //可以写成 flag = a+b>c&& a+c>b&& b+c>a?1:0
}
double disten(double a,double b,double c,double d)
{

    double disten = sqrt(pow(a-c,2)+pow(b-d,2));
    return disten;
}
