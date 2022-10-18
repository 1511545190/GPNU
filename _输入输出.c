#include <stdio.h>
#include <math.h>

int main(void)
{
    char a = 255;// 111111111 100000000  - -1
    printf("c:%d\t",a);

    
    a -= 1;     // 111111110   补码表示 10000001 -2
    printf("c:%d\t",a);

    a = 255 +1;  //1 00000000 去位   0
    printf("c:%d\t",a);

    //unsigned 去掉符号位  

    unsigned char b = 255;
    printf("b: %d\t",b);

    //printf("%u");用 %u的格式看待机器码   11111111
    printf("%%u:%u(-1)",-1);  

    printf("\t%.0f\t",pow(2,32)-1);    //%u 4个字节 32位     //%hh一个字节

    // 0八 0x十六
    // %o %x or %X
    printf("\n%d\t%d\n%#o\t%#x\n",010, 0x10, 8, 16);

    //尽量不要用浮点数做判断，精度损失 2.3489373， 2.34354353
    //或者用差值的绝对值来判断等于  
    double m = 1.3, n =1.3;
    if(m==n)printf(" m = n\n");
    if(fabs(m-n)<1e-12);

    //不要用%d输出浮点
    printf("%d\n",4.566666); //输出 394724674

    printf("%d\n",(int)4.54665); //去尾 4

    printf("%.0f\n",4.5666666);  //浮点数.四舍五入
    
    //计算机表达的数是离散的 
    printf("0.4222222 %%.30e|%.30e\n",0.4222222);  //小数点后30位

    
    //大概 float 7个数字有效，double 15个数字有效
    //double 只能 %lf scanf
    printf("%.0f\n");

    //浮点数 /0.0  无穷大
    printf("%f\n",-1/0.0); // 1.0/0
    //输出 1.#INF00 正无穷大


    printf("%f\n",-1/0.0);
    //输出 -1.#INF00 负无穷大

    float f = 1.3323f; //加了f才是float 否则是double

    char cg = 'a'  - 'A';
    char zi = 'b' -cg;
    printf("%c",zi);

    printf("%f\n",10/3.0*3); // 10
    printf("%f\n",10/3*3.0); //9
    
    //scanf("")需要知道类型的大小 short %hd double %lf
    printf("%f",10/3.0*3);
    //但是printf 会根据占位符自动转换

    int a,b;
    a=b=0;
    scanf(" %d %d \nabc",&a,&b);    
     //前面空格可不用输入 输入完后要再输入一个可见字符来完成
    /* 
    ：23 34
      s
    - 23 34

    ：23 
      34 s
    - 23 34   
     */
    
    scanf("%d%c%",&a,&b);  //可用来截取数据
    
    // ^0000000 不变     &111111 不变     |0000000000000不变
    // ^1111111 反位     &000000 变0      |1111111111111 变1
    // ^相当于二进制加法（不溢出情况下)

    
    return 0;
}
