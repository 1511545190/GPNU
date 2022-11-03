#include <stdio.h>
int main(){
    int ch;
    int cnn = 0;

    while((ch = getchar())!=10){//10为回车!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        if(ch>='A'&&ch<='Z'){  //包括等于
if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
    cnn ++;
}
                
        }
    }
    printf("%d",cnn);
    return 0;
}
