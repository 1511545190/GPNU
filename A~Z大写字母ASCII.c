#include <stdio.h>
//打印ASCII码对应的字符
int main(void)
{
    for(int i = 32;i<=127; i++)
    {
        printf("%d represent %c;\n",i,i);  
        
    }    
    return 0;
}
