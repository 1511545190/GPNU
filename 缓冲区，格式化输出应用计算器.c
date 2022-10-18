#include <stdio.h>
/* 
四种运算符的优先级相同，按从左到右的顺序计算。
输入在一行中给出一个四则运算算式，
没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
 */
int main(void)
{
   /*  int a;  //缓冲区
    scanf("%d",&a);             //输入1c
    putchar(getchar());         //输出 c  

                //format格式化输出
    scanf("%d%c",&a,&input);    //输入232c
    printf("%c",input);         //输出c

 */
    int number;
    int sum = 0;

    char operator;
    scanf("%d",&sum);
    while(1)
    {
        
        scanf("%c%d",&operator,&number);
        

        if(operator == '+'){
            sum += number;
        }
        else if(operator == '-'){
            sum -=number;
        }
        else if(operator == '*'){
            sum *= number;
        }
        else if(operator == '/')
        {
            if(number == 0) 
            {
                printf("ERROR\n");
                break;
            }
            sum /=number;
        }
        else if(operator == '=')
        {
            printf("%d\n",sum);
            break;
        }
        
        else
        {
            printf("ERROR\n");
            break;
        }
    }

int a = -1;

    //     =优先级小于 ！=
    while((a = getchar())!= EOF)  //^Z
    {
        
        putchar(a);
    }

    
    return 0;
}