#include <stdio.h>
//全局变量 需要用编译时课常量来赋值
//int a = f(); 不可
//int a = b; (b 非 const int)
int a = 0;
//静态本地变量
//每次离开函数，静态本地变量还存在

//返回本地变量的地址是危险的，野指针
//返回全局变量的指针是合适的
void f()
{
    static int a=0; //只初始化一次，实际上是全局变量
    printf("%d,%p\n",a,&a);   //只是生存期不同
    a++;
};
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