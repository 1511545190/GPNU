#include <stdio.h>
char *digition(int cnn){//输出位名
                 //cnn比实际少一位
    ////////////1  /10
    ////////////0  / 1
    //注意！！！！！！！！！！！！！！！！！！！！！！！
    char *chs[]={"\0","\0","S","B","Q","W","S","B","Q","Y",};//
    int a=0;
    while(cnn>0){   
        a++;
        cnn/=10;
    }
    return chs[a];
}
int main()
{
    int cnn=1;
    long number;
    long temp;
    int digit=0;
    int nums[]={'a','b','c','d','e','f','g','h','i','j','k','l','m'};
    scanf("%ld",&number);
    temp = number;
    while(temp>9){
        temp/=10;
        cnn*=10;
    }
    temp = cnn;
    int zero = 0;
    while(cnn>0){
        digit = number/cnn;
        //位不是零的时候
        if(digit){
            
            if(zero!=0){
                //printf("%s",digition(temp/cnn));
                printf("a");
                zero =0;
            }
            printf("%c%s",nums[digit],digition(cnn));                                                       
        }
        else if(digit==0&&cnn==temp)printf("a");            //解决当WY时不显示后缀
        else if(cnn==1000&&digit==0)printf("W");
        else if(cnn ==1000000&&digit==0)printf("Y");
        else
           zero=1;
        
        number%=cnn;
        cnn/=10;
        
    }
    
}
