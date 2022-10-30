#include <stdio.h>
int main()
{
    int m,n;
    int flag =0;
    scanf("%d%d",&m,&n);
    int i =0;
    int sum=0;
    for(;m<=n;m++){                 //m~n之间的完数
        sum = 0;
        for(i=m-1;i>=1;i--){
            if(m%i==0)sum+=i;     //求因数之和
        }
        if(sum==m)//有
        {
            flag =1;
            printf("%d",m);     //打印
            for(i=1;i<m;i++){               
                if(m%i==0){
                    if(i==1)
                        printf(" = %d",i);
                    else
                        printf(" + %d",i);     
                }
                if(i==m-1)
                    printf("\n");
            }
        }

    }
    if(flag==0)printf("None");
    return 0;
}
