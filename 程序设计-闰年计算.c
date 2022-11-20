#include <stdio.h>
int main()
{    //给指定年份（21世纪内），输出截至该年份的闰年
    int year;
    scanf("%d",&year);
    if(year>2100||year<=2000)
    {
        printf("Invalid year!\n");
    }
    else 
    {
        int tag = 0;
        //截至，是包括本年份的
        for(int y = 2000;y<=year;y++)
        {
            if(y%100!=0&&y%4==0||year%400==0)
            {
                printf("%d\n",y);
                tag++;
            }
        }
        if(!tag)
            printf("None");
    }
    
    return 0;
}
