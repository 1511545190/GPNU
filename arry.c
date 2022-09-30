#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nums[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        nums[i]= 100 +i;
    }
    printf("%d\n",i);

    for(j=0; j <10; j++)
    {
        printf("Element[%d] = %d\n", j ,nums[j]);
    }
    
    int threedim[5][10][4];
    for(int i =0;i<5;i++)
    for(int j =0;j<10;j++)
    for(int k =0;k<4;k++)
    {
        threedim[i][j][k] = i + j+k;
    }

    for(int i =0;i<5;i++)
    for(int j =0;j<10;j++)
    for(int k =0;k<4;k++)
    {
        printf("%d\t",threedim[i][j][k]);
        
    }

    //转递数组给函数
    double getAverage(double *balance, int size);
    double blance[5] = {1000, 2, 3,17,50};
    double avg;

    avg = getAverage(blance, 5);
    printf("平均值是 %10.3lf",avg);


    //从函数返回数组
    double* arry();
    double *arr = arry();//只能用指针类型接受, arry是一个指向 &arry[0] 的指针
    
    double blance[5];    //指针指向数组
    double *p = blance;

    for(int i = 0;i<10;i++)
    {
        printf((i == 0)?"\n----\n":" ""%10.3lf\n",*(arr+i)); //注意数组用指针表达
    }

    return 0;
}
//转递数组给函数
double getAverage(double *balance,int size)
{
    double sum = 0;
    for(int i =0;i< size;i++)
    {
        sum += balance[i];
        printf("size:%d\n",size);
        printf("%f,",balance[i]);
        printf("%f\n",sum);
    }

    return sum/size;
}

//从函数返回数组
double *arry()
{
    static double arry[10];

    /* 设置种子 */
    srand((unsigned)time(NULL));
    for (int i = 0; i< 10; ++i)
    {
        arry[i] = rand();
        printf("arry[%d] = %10.3lf\n",i,arry[i]);
    }
    return arry;
}
