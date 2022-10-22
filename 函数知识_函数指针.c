#include <stdio.h>
int fu(int(*in)())  //以 函数指针 为参数的函数
{
    printf("Hello!\n");
    printf("%d%%",in());  //调用时直接用函数名(), 相当于数组
    return 0;
}
int in(){return 0;}



void re(int);       //原型声明可以不写参数，但是容易出类型错误
int main(void)
{
    int re = 1;
    ret(re);    //实际参数 //值
    printf("%d",re);

    //生存期，作用域  都在块中
    if(re == 1)
    {
        //此 re 非外部re
        int re = 2;            //可以定义与外部同名变量，掩盖外部
        printf("\n%d\n",re);    //出去后变量消失
    }
    if(1)
    {
        re = 3;
    }
    printf("%d",re);
    
    //函数指针
    int (*fcp)() = fu;  //函数名不加括号就是指针，指向函数所在的地址
    fcp(in);           //传参直接用函数名
    
    return 0;
}
//函数调用时是传值，里面的操作对外面的空间没有影响

//生存期，作用域  在块中




void ret(int re2)  //形式参数  //参数
{
        re2 = 100;
    
}
