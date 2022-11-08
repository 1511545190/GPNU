#include <stdio.h>
int main()
{
    char character[80+1];  //字符串！！！！！！！
    gets(character);
    int i=0;
    while(character[i]){   
        //A-Z B-Y  Z - A
        if(character[i]!=' '&&character[i]<='Z'&&character[i]>='A')
        printf("%c",'Z'-(character[i]-'A'));   
        else if (character[i]==' ')
        {
            printf(" ");
        }
        else 
        {
            printf("%c",character[i]);
        }
        
        
        i++;
    }
}
