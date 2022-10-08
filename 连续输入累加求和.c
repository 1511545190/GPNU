#include <stdio.h>

int main(void)
{
    int sum = 0, count = 0,number;
    scanf("%d",&number);
    for(;number != -1;count++) //while(number!= -1)
    {
        scanf("%d",&number);
        sum += number;          //count ++;
    }
    
    printf("%d numbers sum up euqare %d\n",count,sum);    
    return 0;
}
