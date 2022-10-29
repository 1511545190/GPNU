#include <stdio.h>
int search(int key,int a[],int LEN)//不能用sizeof算长度，*
{
    int ret = -1;
    for(int i=0;i<LEN;i++)
    {
        if(key == a[i]){
            ret = i;
            break;
        }
    }
    return ret;
}
//#############################################
struct {              //结构数组 模仿键对值
    int a;
    char *name;
}a[]={
    1,"one",
    2,"two",
    3,"three",
};
//#############################################
int main(void)
{
    int nu[]={2,1,3};
    int r =search(1,nu,sizeof(nu)/sizeof(nu[0]));
    printf("%d %s",r,a[r].name);
    
    return 0;
}
