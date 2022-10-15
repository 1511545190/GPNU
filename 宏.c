#include <stdio.h>
#include <string.h>
#define _Debuger    //可不替换

//宏替换
#define PI 3.141926
#define P printf("%6f",PI);\
printf("111");
   #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
//带参数的宏
#define cube(x) ((x)*(x)*(x)) //外括号，内括号都要 （（））
int main(void)                  //不然容易出错 因为参数可能为表达式 或者此函数参与运算
{
    printf("%6f\n",PI);
    P
    printf("%d\n",__LINE__);
    printf("%s\n",__FILE__);
    printf("%s\n",__TIME__);
    
    printf("cube %d\n",cube(5));

 char s[100];
    strcpy(s, "abcd");
int i = 0;
putchar(TOUPPER(s[++i]));

    
    return 0;
}