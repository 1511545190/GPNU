#include <stdio.h>
#include <math.h>
int main()
{
    /*
    
    */
    
    int number;
    int count = 1;
    scanf("%d",&number);
    
    if(number < 0)printf("fu ");
    
    int num = fabs(number);
    number =num;

    while(num>9)
    {
        num/=10;
        count*=10;
    }
    
    int n;                  //也保证了0进入循环
    while(count>0)        //要用count，否则number 末尾0输出不了
    {

        n = number/count;

        number%=count;
        count/=10;
        
            switch(n)
            {
                case 0: printf("ling");break;
                case 1: printf("yi");break;
                case 2: printf("er");break;
                case 3: printf("san");break;
                case 4: printf("si");break;
                case 5: printf("wu");break;
                case 6: printf("liu");break;
                case 7: printf("qi");break;
                case 8: printf("ba");break;
                case 9: printf("jiu");break;
            }
            if(count > 0)      //最后一个数字输出之后，count/10了 =0
            printf(" ");
    }
    
    
    return 0;  
}