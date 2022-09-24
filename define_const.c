#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    //const 常量
    const int LEN =10;
    const int WID =5;
    int s;

    s = LEN*WID;
    printf("Value of s :%d", s);

    

    return 0;

}