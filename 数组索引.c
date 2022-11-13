#include <stdio.h>
int main()
{
    

    int arry[]={1,2,3,4,};//数据地址由低到高
    int *p = &arry[4];

    int *par = &arry[3];
    printf("%d\n",par[-2]);//相当于 arry[1]

    printf("[0]%p - [4]%p : %d\n",arry,p,arry - p);//数组指针可以相减，结果为索引差值
    printf("[4] - [0] : %d\n",p - arry);//数组指针可以相减，结果为索引差值

    int a,b,c;
    int*pa = NULL,*pb = NULL,*pc =NULL;
    pa=&a;
    pb=&b;
    pc=&c;
    printf("a p %p\n a>arry",pa);
    printf("P a-c: %d\n",pa-pc);
    printf("P a-b: %d\n",pa-pb);



}
