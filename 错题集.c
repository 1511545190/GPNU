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
 
