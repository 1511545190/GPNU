#include <stdio.h>
int main()
{
    /*
    一对兔子，
    从出生后第3个月起每个月都生一对兔子。
    小兔子长到第3个月后每个月又生一对兔子。
    fn = fn-1 + fn-2;
    */
    
    int N;
    int cn = 2;
    scanf("%d",&N);
    if(N==1)
        printf("1");
    else if(N==2)
        printf("3");
    else
    {
        int fn_1=1,fn_2=1,fn;
        
        while(fn<N)      //fn=n时离开
        {
            fn = fn_1+fn_2;
            //往前移
            fn_2 = fn_1;
            fn_1 = fn;
            cn++;
        }
        printf("%d",cn);
    }
    
    
    return 0;  
}
