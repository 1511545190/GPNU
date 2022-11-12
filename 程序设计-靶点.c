/* 
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，
第j列上的最小数。一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。
输入格式:
输入的第1行是一个正整数n, （1<=n<=100），然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。
输出格式：
对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数。
如果找不到，就输出
NO
题目所给的数据保证了不会出现多个鞍点。
 */
#include <stdio.h>
int main()
{
    int num[10][10];
    int n,ima,jmi;   //返回下标，用值判断
    int flag = 1;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        for(int r=0;r<n;r++)
        scanf("%d",&num[i][r]);
    }
    //行扫描
    for(int i=0;i<n;i++)
    {
        int maxi=0;
        int index = 0;
        int j;
        for(j=0;j<n;j++)
        {
            if(num[i][maxi]<num[i][j])
            {
                maxi = j;//找出i行最大的标
                ima = num[i][j];
            }
        }
        //在对应j列找最小的
        for(int k=0;k<n;k++)
        {
            if(num[k][maxi]<num[index][maxi]){
                index = k;
                jmi = num[k][maxi];
            }
        }
        if(jmi==ima)
        {
            printf("%d %d",index,maxi);
            flag = 0;
        }

        

        
    }
    if(flag)printf("NO");   
    return 0;
}
