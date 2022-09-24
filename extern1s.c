#include <stdio.h>
int adn(); //声明
//全局变量必须放在外边 x 、y
int x =2;//初始化
int y =3;
int main()
{
    
    int result;
    result =adn();
    printf("result:%d",result);
    return 0;
}