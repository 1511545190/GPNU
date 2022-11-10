/* 
首先在一行中输出朋友信息的总条数。然后对朋友的每一行信息
，检查其中是否包含 chi1 huo3 guo1，并且统计这样厉害的信息有多少条。
在第二行中首先输出第一次出现 chi1 huo3 guo1 的信息是第几条（从 1 开始计数）
，然后输出这类信息的总条数，其间以一个空格分隔。题目保证输出的所有数字不超过 100。
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char item[]="chi1 huo3 guo1";
    char say[81];
    int first =0;
    int line =0;   //一定要输入，所以是1
    int cnn = 0;


    while(1)
    {
        gets(say);
        if(say[0]=='.')break;
        line++;
        int k=0;
        //检查
        for(int j=0;say[j];j++){
            if(say[j]=='c'){
                int m=0;
                int n=j;
                while(say[n]==item[m]&&say[n]!=0){   //还要判断结尾
                    m++;
                    n++;
                    k++;
                }
                break;
            }
        }
        if(k==strlen(say))   //记录第一次
        {
            if(first ==0){
                first =line;
            }
            cnn ++;

        }


        
        

    }
    printf("吃火锅出现了%d次\n第一次出现在第%d行\n总共输入了%d行",cnn,first,line);
    
}
