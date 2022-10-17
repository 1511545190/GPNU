//输出2进制
#include <stdio.h>
int main()
{
    // 1u <<1 10
    // 用and 变零 用 |变1
    // 用 & （n| m) 变两个0
    
    int number;
    scanf("%d",&number);
    unsigned mask = 1u << 31;  //0x8000 0000 ->10000 00000
    for(;mask;mask >>=1)
    {
        printf("%d",number & mask?1:0);
        //  000010000
        //& 111101111  
        //= 000010000 输出 1
    }
    printf("\n");
    return 0;
}