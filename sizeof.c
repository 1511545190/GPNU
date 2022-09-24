#include <stdio.h>
#include <string.h>
int main()
{
    printf("float size:%lu\n",sizeof(float));
    printf("double size:%lu\n", sizeof(double));
    printf("int size:%lu\n", sizeof(int ));
    printf("char size:%lu\n", sizeof(char));
    printf("long size:%lu\n", sizeof(long));
    char string[50] = "Hello world!"; //长度包括空格
    printf("len of string: %d", strlen(string)); //string.h
    return 0;
}