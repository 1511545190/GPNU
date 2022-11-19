/* 
给定不超过6的正整数A，
考虑从A开始的连续4个数字。
请输出所有由它们组成的无重复数字的3位数。
 */
#include <stdio.h>
#define N 4
int main()
{
    int numbers[N];
    scanf("%d",&numbers[0]);
    for(int i=1;i<N;i++)
    numbers[i]=i+numbers[0];
    int counter = 0;
    //暴力法
    for(int i = 0;i<N;i++){  //小数在外
        for(int j = 0;j<N;j++)
        {
            for(int k=0;k<N;k++)
            {
                if(numbers[i]!=numbers[j]&&numbers[j]!=numbers[k]&&numbers[k]!=numbers[i]){
                    printf("%d%d%d",numbers[i],numbers[j],numbers[k]);
                    counter++;

                    if(counter%6!=0)printf("#");
                    
                    //cnn 一开始为1
                    if(counter!=1&&counter%6==0)printf("\n");
                }
            }
            
        }
        
    }


    
    return 0;
}
