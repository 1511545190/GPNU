#include <stdio.h>

int main(void)
{
    //输出矩阵
	//求阶乘
	//算数列
	// 除了!0 => 1 ，!x 都为0  ---------------------常用作入口

    //暴力破解
    int one, two, five,yuan;
    yuan = 1;

    int exit = 0;
    for( one = 0;one<= yuan*10;one ++)
    {
        for( two = 0 ;two <= yuan*5;two++)
        {
            for( five = 0;five <=yuan*2;five++)
            {
                //是整数，不可这么写，会去尾！！！！
                //if(one/10 + two/5 + five/2 == yuan)
                if(one + two*2 + five*5 == yuan*10){
                printf("%d one + %d two + %d five\n",one,two,five);
                exit = 1;
                break;       //goto exit; 
                //或者用goto 语句   Flag:   goto flag;

                }
            }
            if(exit == 1) break;  //########################注意 重要套路
        }
        if(exit == 1) break;   //exit:
    }

/* 
#include <stdio.h>

int main()
{
	int x;
	int one, two, five;
	
	scanf("%d", &x);
	for ( one = 1; one < x*10; one++ ) {
		for ( two = 1; two < x*10/2; two++ ) {
			for ( five = 1; five < x*10/5; five++ ) {
				if ( one + two*2 + five*5 == x*10 ) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",\ 
					one, two, five, x);
					goto exit;
				}
			}
		}
        
	}
    exit:
	
	return 0;
}



 */
    
    
    return 0;
}
