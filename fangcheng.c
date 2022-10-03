#include<stdio.h>
#include<math.h>
int main()
{
    /* double a,b,c,disc,x1,x2,p,q;
    scanf("%lf%lf%lf", &a,&b,&c);
    disc = b*b - 4*a*c;
    if(disc<0)
        printf("No realroots\n");
    else
    {p = -b/(2.0*a);
    q = sqrt(disc)/(2.0*a);
    x1 = p +q;x2=p-q;
    printf("x1=%7.2f\nx2=%7.2f\n",x1,x2); 
}
*/
   /*  printf("%e",123.456);
    printf("\n%12.3e",123.456);
    printf("\n%12.3E",123.456); */

    /* char a = 'B',b = 'O',c = 'Y';
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    putchar('a'-32); */

    //大小写转换
    char ch; 
    scanf("%c",&ch);
    ch = ch>= 'A'&&ch<= 'Z'? ch + 32: ch;
    printf("%c",ch);

    return 0;    
}