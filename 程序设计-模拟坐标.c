#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(double y=n/2;y>-n/2;y=y-0.5){
        for(double x =0;x<n/2;x=x+0.5){
            //线性规划图像
            if(fabs(y)<x&&fabs(y)<-(x-n/2)){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
