//2022年10月6日
#include <stdio.h>

int main(void)
{
    int main = 0; //main用作变量名也可

    printf("%f",10/3.0*3);//类型转换按步分析
    int a,b;
    a=b=0;
    scanf(" %d %d \nabc",&a,&b);  //输入/n没啥作用，在scanf完成获取之后还有字符，要输入可见字符来结束输入
          
    printf("%d %d",a,b);



    
    return 0;
}
