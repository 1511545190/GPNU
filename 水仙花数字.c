#include <stdio.h>

//循环算幂次 n*=n 循环一次 n2
int main(void)
{
    int n;
    scanf("%d",&n);
 

    //控制位数
    int max =1;
    for(int i =0;i<n;i++)
    {
        max*=10;  
    }
    

    

    //遍历 n位数
    for(int i= max/10; i<max;i++)
    {
        
         
        //分离数字,算幂再相加
        int nu = i;        
        int sum =0;
        
        do{
            int digit = nu%10;
            nu /= 10;
            int mty = digit;
            //算幂循环n-1次
            for(int j =1;j<n;j++)
            {
                mty *=digit;    //如果digit *= digit 4 = 2*2;             
            } // ? = 4*4  不是求幂了
            
            sum += mty;                 
        }while(nu>0);
            
        if(sum == i) printf("%d\n",sum);
         
    }
   return 0;
}




/* #include <stdio.h>

int main(void)
{
    int a = 2;
    // scanf("%d",&a);
    int i,j,k;
    for( i =a;i< a+4;i++)
    {
        for( j=a;j<a+4;j++)
        {
            for( k=a;j<a+4;j++)
            {
                if(i!=j && i!=k && j!=k)
                {
                    printf("%d%d%d",i,j,k);
                    if(j<j+4)printf(" ");
                    if(i==a+3)printf("\n");
                }
            }
        }
    }
    
    return 0;
} */