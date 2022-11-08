#include <stdio.h>
int main()
{
    printf("[1] apple\n\
[2] pear\n\
[3] orange\n\
[4] grape\n\
[0] exit\n\
");
    /* 
    单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、10.20元/公斤。
    */
    int cnn = 1;
    int n;
    double price[5] = {0,3.00,2.50,4.10,10.20,};   //价格
    scanf("%d",&n);
    while(n&&cnn<=5){
        if(n>=0&&n<5)
        printf("price = %.2lf\n",price[n]);
        cnn++;                          
        scanf("%d",&n);

        
    }


    return 0;
}
