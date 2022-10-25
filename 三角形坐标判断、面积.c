#include <stdio.h>
#include <math.h>
float disten(float,float,float,float);
int is_triangle(float a,float b, float c);
int main()
{
    
    float x1,y1,x2,y2,x3,y3;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    float a = disten(x1,y1,x2,y2);
    float b = disten(x1,y1,x3,y3);
    float c = disten(x2,y2,x3,y3);
    
    float s;
    float area;
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
int is_triangle(float a,float b,float c)
{
   // int flag;
    //(a+b>c&& a+c>b&& b+c>a)?flag = 1: flag =0; //不能写成 flag =1：flag=0；
    //并且flag =1:0是一个语句，只会执行这个
    //如果条件为真 ? 则值为 X : 否则值为 Y
    return (a+b>c&& a+c>b&& b+c>a)?1:0;
}
float disten(float a,float b,float c,float d)
{

    float disten = sqrt(pow(a-c,2)+pow(b-d,2));
    return disten;
}
