#include <stdio.h>
#define N 1000
int main()
{
    int a1,a2,n;
    char numbers[N];
    scanf("%d%d%d",&a1,&a2,&n);

    //前两个元素是确定的
    numbers[0]=a1;
    numbers[1]=a2;

	//开始填充的位置
    int j = 2;

    for(int i=2;j<n;i++,j++)
    {
    	//乘法起始的位置i（填充与乘法互不干扰)
        int temp  = numbers[i-1]*numbers[i-2];
        if(temp<10)
        {
            //如果是个位数，那么放入
            numbers[j]=temp;
        }else
        {
	    //放入十位
            numbers[j]= temp/10;
            
           //防止越界 
            if(j+1<n)
            {
		//放入个位,因为多放了一位所以元素又多了一个
		//so j++
                numbers[j+1] =temp%10;
                j++;

            }
        }
    }
    //遍历输出
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",numbers[i]);
        }
        else
        printf(" %d",numbers[i]);
    }
    
    return 0;
}
