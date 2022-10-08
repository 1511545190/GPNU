#include <stdio.h>

int main(void)
{
    for(int i =0; i<10;printf("%d,",i))i++;    //打印1~10； 1,2,3,4,5,6,7,8,9,10,
    
    
    for(int i = 0;i++<9;) // 与 for(int i= 0;i<9;i++) 不等价 
                        //尽管都是循环9次 但 i 值 不一样
    printf("%d ",i);    //1 2 3 4 5 6 7 8 9 0
    
    return 0;
}
