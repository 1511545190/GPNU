#include <stdio.h>
int main(void)
{
    //错题集
    
    int j = 4;
    for(int i = j;i<=2*j;i++)
    {
        switch(i/j){
            case 0:
            case 1:printf("*");break;

            case 2:printf("#");break;
        }
    }
    //****#

    int x=1, y=012;
    printf("\n%d",x++*y);
    //10

    int k;
     while(k!=0)k=k-1;
     printf("%d",k);
     //k没有初值，但是一定会到0

     unsigned short sht = 0;
     sht--;
     printf("\n%u",sht);
     //65535

    //  int i=6;
    //  if(i<=6)
    //     printf("hello\n");;
    // else
    //     printf("bye-bye\n");;
    // //无法编译

    char ch =-1;
    printf("%d",ch);
    //输出-1

    int i,x1,y1;
    i=x1=y1=0;
    do{
        ++i;
        if(i%2)
            x1+=i,i++;
            y1 += i++;
        
    }while(i<=7);
    printf("\n%d %d %d",i,x1,y1);
    //9 1 20
    
    
    #include <stdio.h>
int main(void)
{
    /* {
        int i,k;
        for(i=0,k=-1;k=1;i++,k++)
            printf("* * *\n");
    }//无限循环 */
    
    for(int i =0; i<10;printf("%d,",i))i++;    
    //打印1~10； 1,2,3,4,5,6,7,8,9,10,
    
    
    for(int i = 0;i++<9;) //1 2 3 4 5 6 7 8 9 10
    printf("%d ",i);

    for(int i=0;i<9;i++)
    printf("%d ",i);    //0 1 2 3 4 5 6 7 8 9 

    {
        int i,j;
        for(i=1;i<=4;i++){
            for(j=1;j<=2*i-1;j++){//每次输出及数个
                printf("*");
            }
            printf("\n");
        }
    }// 构建j 与 i的关系

    {
        #include <math.h>
        //计算e的近似值,最后一项绝对值小于1e-5
        //1 + 1/1! + 1/2! + ...
        int n=1,count =1;
       // double e=0.0; 
       double e = 1.0;  //循环进入之前e为1
        double term =1.0;
        while(fabs(term) >= 1e-5)//判断末项大小
        {
            term/=n; //阶乘分之一
            e+=term;
            n++;
            count++;
        }
        printf("e:%f, count:%d",e,count);
    }
    
    
    return 0;
}
 
