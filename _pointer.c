#include <stdio.h>
#include <string.h>
int main()
{
    /* 
    数组指针
     */
    int var[] = {1,6,3,4};
    int *p;
    p = var;

    printf("sizeof var %zd\n",sizeof(p)); //64位机，指针占8个字节
    
    printf("var adress:%#20p\n", p);        //打印结果相同
    printf("var adress:%#20p\n", &var);     //打印结果相同
    printf("var adress:%#20p\n", &var[0]);  //打印结果相同

    printf("var1 %d\n", *p++);  //*运算等级相当于sizeof ，&
    printf("var2 %d\n", *(p+1)); //注意*取值运算符等级赤壁 算数运算符高，需要加括号
    /* 
指针的每一次递增，它其实会指向下一个元素的存储单元。
指针的每一次递减，它都会指向前一个元素的存储单元。
指针在递增和递减时跳跃的字节数取决于
指针所指向变量数据类型长度，
比如 int 就是 4 个字节。
     */
    p = var;
    /* 指针也可以比较大小 ，顺序表*/
    printf(p <= &var[3] ? "yes\n":"no\n"); 
    while(p <= &var[3]){
        printf("%d ",*p);
        p++;
    }

    //以数组为返回值
    int *fun();
    int* arr;
    arr = fun();
    
    //指针表示数组
   printf("arr %d ",*(arr+1));

//---------------------------------------
    //字符指针变量指向字符串
    char *str = "I love you";
    //

    //注意是str，而不是*str
    printf("\n\n\nsizeof str:%d\n",strlen(str));  //不显示字符串中的
    for(int i = 0;i< strlen(str);i++)
    {
        printf("%c",str[i]); //用数组方式访问
    }
 //------------------------------------------
 /* 
 char* pointer
 指针数组,存放指针的数组
 //替代二维数组存储字符串
  */   
    char *pointer[5] = {
        "the first string",
        "the second string",
        "the thirth string",
        "the fourth string",
        "the fifth string"
    };
    for (int i=0;i<4;i++)
    {
        //要输出字符串只需传递第一个字符的指针地址
        //若 * pinter[i] 则输出 首字母
        printf("string %s\n", pointer[i]);

    }

    //--------------------------------------------------


    (char*) pointer; 
    return 0;
}

int* fun(){
    static int r[3] = {1,2,3};
    return r;


}