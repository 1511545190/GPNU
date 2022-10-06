#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    if(n%2 != 0)
    {
        for(int i = 1;i<=n;i+=2)
        {
            if(i == n)printf("%d",i);
            else printf("%d ",i);
        }
    }
    else
    {
        for(int i = 1;i<=n-1;i+=2)
        {
            if(i == n-1)printf("%d",i);
            else printf("%d ",i);
        }
    }
    
    return 0;
}