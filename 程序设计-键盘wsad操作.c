#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char a[50][50]={
        "#####################",
        "#0 ######    #    ##",
        "# #   ### ##   #  ###",
        "#   # ###  #  ##   ##",
        "##  #           ##   ",
        "#####################",
    };
    int i,x, y ,p,q;
    char ch;
    x = 1;y=1;p=4;q=20; //其实位置1，1
    
    while(1){
        for(i=0;i<6;i++)
         {
        puts(a[i]);    //状态更新
        }

        ch = getch();//非缓冲输入
        // ch = getch();
        //printf("%c",ch);
        if(ch=='s')
        {
            if(a[x+1][y] !='#')
            {
                a[x][y]=' ';
                x++;//s行向下移动，交换位置
                a[x][y]='0';
            }
        }
        if(ch=='w')
        {
            if(a[x-1][y] !='#')//判断是否可执行
            {
                a[x][y]=' ';
                x--;//s行向W移动，交换位置
                a[x][y]='0';
            }
        }
        if(ch=='d')
        {
            if(a[x][y+1] !='#')//判断是否可执行
            {
                a[x][y]=' ';
                y++;//列向D移动，交换位置
                a[x][y]='0';
            }
        }
        if(ch=='a')
        {
            if(a[x][y-1] !='#')//判断是否可执行
            {
                a[x][y]=' ';
                y--;//列向D移动，交换位置
                a[x][y]='0';
            }
        }
        if(x==p&&y==q){
            printf("WIN!!!\n");
            break;}
        system("cls");//清屏
    }
    



    return 0;
}
