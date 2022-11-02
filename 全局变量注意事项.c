#include <stdio.h>
//全局变量 需要用编译时刻常量来赋值
//int a = f(); 不可
//int a = b; (b 非 const int)
int a = 0;

void fun(){
    static int sa = 0;// 全局静态变量，但可以修改值
    sa++;
}

static int f();   //静态函数，只能在此文件中用

//返回本地变量的地址是危险的，野指针
//返回全局变量的指针是合适的
void f()
{
    //静态本地变量
    //每次离开函数，静态本地变量还存在
    static int a=0; //只初始化一次，实际上是全局变量
    printf("%d,%p\n",a,&a);   //只是生存期不同
    a++;
};

//声明变量
/*其中，变量在头部就已经被声明，但是定义与初始化在主函数内*/
extern int outline; //可以在别的文件初始化，通常放在头文件
int x;
int y;
int add_two()
{
    //声明变量为外部变量
    extern int x;
    extern int y;   //不构成重复定义
    //初始化
    x = 1;
    y = 2;
    return x + y;
}


int main(void)
{
    f();
    f();
    f();
    printf("%d,%p\n",a,&a);  //可以看出全局变量和静态本地变量地址差不多
    
    int a =0;
    printf("%d,%p",a,&a);
    return 0;
}
