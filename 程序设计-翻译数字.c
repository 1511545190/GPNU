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

    while(num>9)            //num>9 可使得位数少1
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

/*
//字符串储存的是地址,指针数组
    char *str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu",};
    int number;
    int digits = 1;
    scanf("%d",&number);
    if(number<0) printf("fu ");
    int nu = (int)fabs(number);
    
    number = nu;
    while(nu>9)
    {
        nu/=10;
        digits*=10;
    }
    nu = number;
    while(digits !=0)
    {
        int d = nu/digits;
        nu%=digits;
        digits/=10;

        printf("%s",str[d]);
        if(digits!=0)printf(" ");   //最后一个不执行，便和入口一样
        
    }

*/
