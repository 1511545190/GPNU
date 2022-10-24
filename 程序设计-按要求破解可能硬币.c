#include <stdio.h>
int main()
{
    /* 
    要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。
    每行输出一种换法，格式为：“fen5:5分硬币数量, fen2:2分硬币数量, 
    fen1:1分硬币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。
    
    
     */
    int five,two,one;
    int sum;
    int count=0;
    scanf("%d",&sum);
    for(five =sum;five>0;five--) //=sum保证了five的可能值包含在里面
    {
        for(two = sum;two>0;two--) 
        {
               //里面的先循环多次  
              for(one =sum;one>0;one--)
            {
                if(five*5+two*2+one*1==sum)
                {                    
   
                count++;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",five,two,one,five+one+two);
                }
                }
        }
    }
    printf("count = %d",count);
}
