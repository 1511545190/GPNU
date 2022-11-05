#include <stdio.h>
/*
7
      * 
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/
#include <math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i= 0;i<n;i++){
        if(i<(n+1)/2)//上半部分，包括对称轴                    n为奇数
        {
            for(int j=n/2;j>i;j--){    //对称部分无空白           
                printf("  ");           //空白减少
            }
            for(int j=0;j<2*i+1;j++){
                printf("* ");
            }
        }
        else{
            for(int j=0;j<i-n/2;j++){
                printf("  ");         //下半部分，不包括对称轴
            }
            //打印星星// n-i ,倒数第几行
            for(int j=2*(n-i-1)+1;j>0;j--){
                printf("* ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
