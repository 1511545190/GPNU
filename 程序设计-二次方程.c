#include <stdio.h>
#include <math.h>
// result = (-b+-sqrt(delta))/(2*a)
//  >0 两个x   
void calculate2(double a, double b, double delta);  //注意返回类型
//=0 一个x
void calculate1(double a, double b, double delta);
//<0 无x
void calculate0();
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);//输入系数
    double delta = pow(b, 2) - 4 * a * c;

    if (delta > 0)
        calculate2(a, b, delta);
    else if (delta == 0)
        calculate1(a, b, delta);
    else
        calculate0();

    return 0;
}
//结果可以表示为  >0 两个x   
void calculate2(double a, double b, double delta) {
    double result1 = (-1 * b + sqrt(delta)) / (2 * a);
    double result2 = (-1 * b - sqrt(delta)) / (2 * a);
    printf("x1 = %.2f\n", result1);
    printf("x2 = %.2f\n", result2);
}
//=0 一个x
void calculate1(double a, double b, double delta) {
    double result = (-1 * b + sqrt(delta)) / (2 * a);
    printf("x1 = x2 = %.2f\n", result);
}
//<0 无x
void calculate0() {
    printf("无解\n");
}
