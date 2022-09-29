#include <stdio.h>
int main()
{
	int function(int, int);
	printf("%d", function(36, 24));

}
int function(int bignum, int smallnum)
{
    return smallnum ? function(smallnum, bignum%smallnum):bignum;

    /* return smallnum ? function(smallnum , bignum % smallnum):bignum; */
/* 	if (smallnum > bignum) //交换最大数为 bignum
	{
		smallnum = smallnum + bignum;
		bignum = smallnum - bignum;
		smallnum = smallnum - bignum;
	}
	int rem = 1;
	while (rem > 0)
	{
		rem = bignum % smallnum; //求余数
		bignum = smallnum;       //将除数换为更小的数
		smallnum = rem; 
             //将余数赋予被除数除数
	}
	return bignum; */

	//最大共倍速 = 两个整数相乘 / 最小共因数
}