#include <stdio.h>

int main(void)
{
    int a = 5;
    switch(a)
    {
        case 0:
        printf("Hello\n");
        case 1:
        printf("a isn't 0\n");
        default:
        printf("haha");
    }
    
    return 0;
}