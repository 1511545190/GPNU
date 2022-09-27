#include <stdio.h>
//声明 函数 ，参数类型必选

int function(int* ,int*);
int main(void)
{
    int a = 97;
    int A = 65;
    printf("%d %d\n",a ,A);
    function(&a,&A);
    printf("%d %d\n",a ,A);

    return 0;
}
int function(int *x, int *y)
{
    int temp;
    temp = *x; //保存地址x的值
    printf("%p\n",x);
    printf("%p\n",y);
    *x = *y;   //y -》 x
    *y = temp;//temp -》 y
    return 0;
}
/* 
通过引用传递方式，形参为指向实参地址的指针，
当对形参的指向操作时，就相当于对实参本身进行的操作。
传递指针可以让多个函数访问指针所引用的对象，
而不用把对象声明为全局可访问。
 */