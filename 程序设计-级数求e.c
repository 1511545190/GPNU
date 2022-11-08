    /* 
    本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 
    直到最后一项的绝对值不大于给定精度eps。
    */
    #include<stdio.h>
    #include<math.h>
    int main()
    {
        double eps;
        scanf("%lf",&eps);  //输入精度

        double sum = 1;    //sum up
        int sign =-1;
        double l_dig =4;            //首项不是分数，不用判断精度，所以sum initial 为 1
        while(1/l_dig >=eps){              //等于时还要计算，所以这里！不大于 <=  is >  but >=
            sum += 1.0/l_dig*sign;
            l_dig +=3.0;
            sign*=-1;   
        }
        printf("sum = %lf",sum);

        return 0;
    }
