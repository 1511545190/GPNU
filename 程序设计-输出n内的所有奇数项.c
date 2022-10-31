#include <stdio.h>

int main(void)
{
   //输出n以内的所有奇数
    int n;
    scanf("%d",&n);
    for(int i =1;2*i-1<=n;i++){
        printf("%d ",2*i-1);    //每次循环应该保持变量只更新一次
    }
    
    return 0;
}
