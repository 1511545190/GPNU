#include <stdio.h>
/* 找出年龄最大的 */
#include <stdlib.h>
typedef struct man{
    char name[10];
    int age;
} sm;

sm person[3] = {
    "li",18,
    "wang",25,
    "sun",22
};
int main(void)
{
    
    struct man *q,*p;
    int i,m =0;
    p = person;     //初始化第一个
    for(i = 0; i<3;i++)
    {
        if(m< p->age)
        {
            m = p->age;
            q = p;      //q用于输出
        }
        p++;
    }  
    printf("%s %d\n",q->name, q->age);
    return 0;
}