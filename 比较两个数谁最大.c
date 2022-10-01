
#include <stdio.h>


int main()
{
	int max(int x, int y);
	int a;
	int b;
	int c;
	//如果使用 , 来分隔输入的 %d, 相应的输入时也需要添加 ,
	//第一个数据输入后使用了空格 那么第二个数据就不会被记录
	scanf("%d,%d",&a, &b);
	printf("a:%d ,b :%d\n");//用后才初始化
	
	c = max(a, b);
	printf("%d CCC",c);
	printf("max is %d \n", c);
	return 0;

}
int max(int x, int y)
{
	return x > y? x : y;
	
}
