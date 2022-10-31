#include <stdio.h>
int main()
{
    //模拟竖式计算
    int n,m,i=0,ret = 1;
    scanf("%d/%d",&n,&m);
     while(i<=200&&ret)      //精确到小数点后20位，则需要《=200，因为 输出个位使用了循环
    {
        
        printf("%d",n/m);
        ret = n%m;
        if(i==0)printf(".");
        n = ret*10;
        i++;
    }

    //模拟111111....../x
    int x;
    int cnn =1;
    int single_number = 1;
    scanf("%d",&x);
    while(x>single_number){            
        single_number=single_number*10 +1;   //从上面滑下来的
        cnn++;
    }
    
    while(single_number%x!=0){
        
        printf("%d",single_number/x);
        cnn++;
        single_number = single_number%x*10 + 1;
        
    }
    printf("%d",single_number/x);  //当%后==0时，要输出1

    printf(" %d",cnn);

    
    
    
}
