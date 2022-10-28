#include <stdio.h>
int main(void)
{
    //index 代表幂次，其值代表个数
    int power[100]={0};
    int max_index = 0;
    for(int i =0;i<2;i++){
        int index,value=0;
        //按高低次顺序输入
        
        do{
            //int index,value; 循环里面定义变量，while 不可将其作为入口
            scanf("%d %d",&index,&value);
            power[index]+=value;
            
             //未达到0，便输入第二遍
            if(power[index]!=0)    //若系数不为零，换max_index
            max_index = (max_index<index)?index:max_index;   //最大index
            
        }while(index);

    }//max_index 最高次
    for(int i =max_index;i>=0;i--)
    {
        

        if(power[max_index]==0)//只有一项且为零
        {
            printf("0");
            break;
        }

        if(power[i]!=0)//系数不为零时
        {
           

            if(i== max_index)//最高次时
            {
                if(i ==1)
                {
                    printf("%dx",power[i]);
                    
                }else if(i ==0)
                {
                    printf("%d",power[i]);
                    
                }else{
                    printf("%dx%d",power[i],i);
                }
            }else{//不是最高次
                
                if(i==0){
                    printf("%+d",power[i]);
                }else if(i==1){
                    printf("%+dx",power[i]);
                }else{
                    printf("%+dx%d",power[i],i);
                }
            }

        }
    }

    
    return 0;
}
