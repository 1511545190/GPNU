#include<string.h>
int main(){
    char str1[20]={"BBC"};
    char str2[20]={"Hello"};

    //return the new pointer(pointed of str1) of new string
    strcat(str1,str2);
    //You need a str1 to receive the result 

    //return true number of the string(not include the '\0')
    strlen(str1);

    //return the pointer(pointed of str1) of new string 
    strcpy(str1,str2);
    //strcat(str2,"A");

    while(*str1++=*str2++) //copy the string
    
        do{
            *str1++ = *str2++
            }while(*str2)





    int a= strcmp(str1,str2);
    //1 str1 bigger 
    //0 equal
    //-1 str2 bigger
    return 0;
}

liu|:~$ cat string.c
#include <stdio.h>
void mycopy(char *str1, char *str2);
int main()
{
        char str1[] = "nihao123";
        char str2[] = "hello=";
        /*字符串指针是指针变量，不要进行赋非指针量*/

        printf("str2 :%s\n",str2);
        mycopy(str1,str2);
        printf("str1 :%s\n",str1);

        return 0;

}

void mycopy(char *str1, char *str2)
{
        //这里的指针是call by value，所以对它进行
        //的++操作不会影响到函数之外的数组
        do{
                *str1++ = *str2++;
        }while(*str2);
        return;
    
}


