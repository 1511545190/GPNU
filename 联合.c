/* 联合 *///占据相同的空间，联合起来使用同一份空间
#include <stdio.h>
typedef union{        //全局，所有函数都可以访问
    int i;
    char ch[sizeof(int)];      //可用于查int 怎样保存在计算机中  
} CHI;
int main(void) 
{
    
    CHI chi;
    
    int a;
    chi.i = 1234; //1234 = 4D2 
    for(int i =0;i<sizeof(int);i++)
    {
        printf("%02hhX",chi.ch[i]);
    } 
    printf("in %s\n",__func__);   //__func__显示当前所在函数名称
    return 0;
}