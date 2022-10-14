#include <stdio.h>
#include <stdlib.h>//malloc
#include <math.h>

int main(void)
{
    /* void *t;
    int cnt =0;
    while(t = malloc(10*1024*1024)){ //直接数字按bit分配
        cnt++;
    } 
    printf("分配了%d00MB空间\n",cnt);  
    */
    /* int *aa;
    aa = (int*)malloc((int)pow(2,64));  //要么size_t 要么int型
    *aa = 1;
    printf("%d ",*aa);
    if(sizeof(int)==sizeof(*aa))printf("等价"); //等价
    
     */
    

    

    printf("sizeof(int) %d",sizeof(int));//sizeof按字节分配
    int number;
    int *a = NULL;
    int i;
    scanf("%d",&number);            
    a = (int*)malloc(number*sizeof(int)); //相当于创立了一个可变数组,
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=number-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    free(a);//有借有还

    
    return 0;
}