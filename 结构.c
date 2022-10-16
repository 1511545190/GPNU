#include <stdio.h>
struct arch {
    int ele1;
    char cha;
};

void Input(struct arch*);     //通过函数修改结构
struct arch MakeSt();          //通过函数创建并返还结构
void Show(const struct arch init);     //显示结构


int main(void)
{
    struct arch a = {1,'A'};
    struct arch *p =&a;
    Input(&a);
    Show(a);
    a = MakeSt();
    Show(a);

    //结构数组
    typedef struct time
    {
        int h;
        int m;
        int s;
    }Time;
    Time time[4];
    for(int i = 0;i<4;i++)
    {
        time[i].h = i;
        time[i].m = i+1;
        time[i].s = i+2;
    }

    //嵌套结构
    typedef struct day{
        int day;
        Time time;
        Time *Btime;

        char palce[100];
        Time OtherTime[2] = {{1,2,3},{4,5,6}};
    }Day;

    Day day;
    day.time.h = 1;
    day.time.m = 2;
    day.time.s = 3;
    day.Btime->h = 66;
    day.Btime->s = 77;
    day.OtherTime[0] = (Time){1,2,3};
    printf("%d",day.OtherTime[1].m);

    

    
    return 0;
}
void Input(struct arch *p)
{
    scanf("%d %c",&p->ele1,&p->cha);   //使用指针赋值要加&
}
struct arch MakeSt()
{
   struct arch temp;
   scanf("%d %c",&temp.ele1,&temp.cha);
   return temp;
}
void Show(const struct arch init)     //显示结构
{
    printf("arch.a:%d\narch.b:%c",init.ele1,init.cha);
}
