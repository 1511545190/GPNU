//可变数组的一种方法
//可增长、可知道大小、可访问到单元
#include <stdio.h>
// #ifndef __A__
// #define __A__
typedef struct{
    int *arry;
    int size;
}Arry;


Arry arry_create(int init_size);//创建
void arry_free(Arry *a);//释放
int  arry_size(const Arry *a);//大小
int arry_at(Arry *a,int index);//访问
void arry_inflate(Arry *a, int more_size);//增长


// #endif
//.c
int main()
{
    Array  a = arry_create(100);
    //赋值
    *arry_at(&a,0)=10;  
}
Arry arry_create(int init_size)//创建
{
    Arry a;
    a.arry = (int*)malloc(sizeof(int)*init_size);  //给数组空间
    a.size = init_size;
    reurn a;   //用于返回结构体
}
void arry_free(Arry *a)//释放数组占用的空间
{
    free(a->arry);
    a->size = 0;
    a->arry =NULL;
}


//封装,查看
int arry_size(const Arry *a)
{
    return a->size;
}

//使用
int* arry_at(Arry *a,int index)
{
    if(index >= a->size)
    {
        arry_inflate(a,(index/5+1)*5 - a->size);//自动长大
    }
    return &a->arry[index];
}

void arry_inflate(Arry *a, int more_size){
//创建新空间，复制后，free之前的空间
    int *p = (int*)malloc(sizeof(int)*(a->size+more_size));
    int i;
    for(i =0;i<a->size;i++)
    {
        p[i]=a->arry[i];
    }
    free(a->arry);
    a->arry = p;
    a->size = more_size;
}


