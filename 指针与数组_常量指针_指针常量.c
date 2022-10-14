#include <stdio.h>
void swap(int* ,int*);
void minmax(int a[], int len, int*min, int *max)
{
    printf("sizeof a =%d[minmax]\n",sizeof(a));
    int i;
    *min = *max = a[0];
    for(i=1;i<len;i++)
    {
        if(a[i]<*min)
        {
            *min = a[i];
        }
        else *max =a[i];
    }
}
int main(void)
{

    int i;
    int a[]={1,2,3,4,5,6,7,8,12,13,34,55,};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d,max=%d\n",min ,max);
    int *p = &a[1];         //指针不能直接赋值，要给他地址指向
    printf("*p=&a[1],*(p+1)=%d\n",*(p+1));   //3

    int *p2 = NULL;p2 = &a[3];
    printf("p2 - p = %d\n",p2-p);//p移动2个单元到p2所指
    //printf("p2 + p = %p\n",p2 + p);不可


    char ac[]={"China"};
    char *pac =ac;
    while(*pac!='\0')
    {
        int a = *pac;
        printf("%c %d\n",*pac++,a);
    }

    short int*a;
    long int *b;
    char *c;
    double *d;
    
    //强制类型转换
    void *pv =(void*)a; //纯粹是地址

   
   
    

/*
{
    //数组等于常量指针，常量指针不能换地址不能++
    char ac[]={"China"};
    while(*ac!='\0')
    {
        ac++;//不可
    }
    -------------------------------
    int *const p2 =a;
    int c =0;
    // p2 = &c;p2++;  不可，常量指针，地址只有一个
        c = 1;
    int *p1 = a;
    p1 =&c;

    //指针所指向的量不能够通过指针被改变
    int const *p2 =a;   //const int *p2
    a++;a=1;  p2 = &c;//ok
    *p2 = 3;//NO

    }
    {
    int a;
    int b;
    printf("%p,%p",&a,&b);   //分配内存自顶向下
    int arr[3];
    printf("\n%p,%p,%p",arr,&arr[1],&arr[2]);

    scanf("%d",&arr[0]);
    printf("a:%d",arr[0]); 
    } 
    {//swap 只能用指针
        int a=1;int b =2;
        swap(&a,&b);
        printf("a:%d,b:%d\n",a,b);
    }
    {   //指针与数组的表示方法
        int a[3]={1,2,3};
        int *p =a;
        printf("p[0]=%d",p[0]);
        printf("*a=%d",*a);
        int *const p2 =a;
        *p2 = 6;
        printf("p[0]%d",p[0]);

    }
*/

    
    return 0;

    
}
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b =t;
}