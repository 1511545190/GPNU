#include <stdio.h>

int main(void)
{
    int a = 10;
    while(a)        //注意 while 零值才会停止，例如 ！1 等
    {               //while(-1) 也会执行  ！（-1） -> 0
        
        printf("%d,",a);
        a--;
    }   
    return 0;
}
