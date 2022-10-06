#include <stdio.h>
//时间差
int main(void)
{
    int bjt,uct;
    scanf("%d",&bjt);


    bjt = bjt/100*60 + bjt%100;  //换算成分钟

    uct = bjt - 8*60;           //时间间隔 8h

    if(uct>=0)
    {
        
        printf("%d\n",uct/60*100 + uct%60);
    }
    else
    {
        uct = uct + 24*60;
        printf("%d\n",uct/60*100 + uct%60);
    }

    printf("%d",0%2);
}
/* 

#include <stdio.h>

int main() {
     
     int utc;
     int bjt_t;
     scanf ("%d",&utc);
     
     if (utc<0 || utc>2359){
         return 0;           //判断是否满足条件，不满足return0
     }
     
     int min=utc%100;
     if(min>60){
         return 0;              // 判断分钟是否满足条件，不满足return0
     }
         
     if(utc>= 800 ){        //&& min<60   //时分大于等于800
         bjt_t=utc-800;
         printf("%d",bjt_t);
     }else if(utc<800){                             //时分小于800
         bjt_t=utc+1600;
         printf("%d",bjt_t);
     }
     
    return 0;
    
}
*/