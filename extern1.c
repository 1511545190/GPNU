#include <stdio.h>
/*外部变量声明
extern 是用在
另一个文件中
声明一个全局变量或函数。
*/
extern int x;//声明
extern int y;
int adn() //初始化
{
    return x + y;
}