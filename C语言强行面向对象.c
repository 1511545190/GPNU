#define C_Class struct 
#include <stdio.h>
C_Class A
{
    C_Class A* A_this;
    void(*function)(C_Class A *A_this);
    int(*method)(C_Class A *A_this,int a);
    void(*show)(C_Class A* A_this);
    int a;
    int b;
};
void buitin(C_Class A *A_this)
{
    A_this->a = 1;
    A_this->b = 2;
    A_this->show(&A_this);
}
int change(C_Class A *A_this,int a)
{
    A_this->a=a;
}
void show(C_Class A *this)
{
    printf(" a  %d",this->a);
}
int main()
{
    C_Class A object = {&object,buitin,change,show,0,0};//初始化
    //成员函数都要传入指针
    object.function(&object);
    int a;
    scanf("%d",&a);
    object.method(&object,a);
    
    object.show(&object);
    return 0;
    
}
