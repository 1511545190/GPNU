#include <stdio.h>
int isdigit(const char* ch){
    return *ch>='0'&& *ch <='9'?1:0;
}
int isletter(const char* ch)
{
    return *ch>='a'&& *ch <='z'|| *ch >='A' && *ch <= 'Z'?1:0;
}

typedef struct num{
    int letter;
    int blank; //' ' or '\n'
    int other;
    int digit;
} num;
int main()
{
    /* letter = 英文字母个数, blank = 空格或回车个数, 
    digit = 数字字符个数, other = 其他字符个数
    */
    num num = {0,0,0,0};
    char string[10+1]={"1111111111"};
    
    int i;
    int N = 10;
    int words = 0;
    for(i=0;i<N+1;i++)
        string[i]=getchar();

    for(i=0;i<N+1;i++)
    {
        if(isletter(&string[i]))
        {
            i++;                                 //移动index 大法
            if(!isletter(&string[i+1])||!string[i+1])//如果下一个字符存在或者下一个字符不是字母
            {
                num.letter++;
            }
        }
        if(isdigit(&string[i]))
        {
            i++;                                 //移动index 大法
            if(!isdigit(&string[i+1])||!isdigit(&string[i+1]))//如果下一个字符存在或者下一个字符不是字母
            {
                num.digit++;
            }
        }

        
    }
    printf("word %d",num.digit);
    return 0;

}

