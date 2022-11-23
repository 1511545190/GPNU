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
            *str1 = *str2++
            }while(*str1++)





    int a= strcmp(str1,str2);
    //1 str1 bigger 
    //0 equal
    //-1 str2 bigger
    return 0;
}


