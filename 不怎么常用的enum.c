#include <stdio.h>

int main(void)
{
    enum Day {
        TUE =2, 
        WED,
        THU,
        FRI,
        SAT,
        SUN

    }day;

    day = WED;
    printf("%d\t",SAT);
    printf("%d\t\n",day);

    for(day = TUE;day<= SUN;day++)
    {
        printf("%d\t",day);
    }

//类型转换
    int a =3;
    enum Day DDay = (enum Day)a;
    printf("\nday %d",DDay);
    
    
    return 0;
}
