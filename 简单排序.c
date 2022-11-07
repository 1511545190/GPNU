//二分查找
#include <stdio.h>
int brnarySearch(int a[],int n,int number){
    int mid = 0;
    int low = 0;
    int hight = n ;//attention！！！！！！！！
    while(low<=hight){
        mid = (low+hight)/2;  //防止溢出 用 mid = low+(hight-low)/2
        if(number > a[mid]){
            low = mid+1;
        }else if(number <a[mid]){
            hight = mid-1;
        }else return mid;
    }
    return -1;
}
//冒泡排序,升序,放后面
// 1 2 5  7 7
void Sort1(int a[],int n){
    for(int i =0;i<n;i++){
        for(int j= 0;j<n-i;j++){
            if(a[j] < a[j-1]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}
//交换排序,升序，从低开始
void Sort2(int a[] ,int n){
    for(int i =0;i<n-1;i++){   // n-2 index不需要排序
        for(int j =i +1;j<n;j++){  //i+1 i之后
            if(a[j]<a[i]){  //J为后面元素
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int Asend(int j, int k){return j<k;}
int Dsend(int j, int k){return j>k;}
//选择排序，选每次最小放到第i
void Sort3(int a[], int n, int (*compare)(int,int)){
    for(int i =0;i<n-1;i++){
        int k = i;   //记录最小的位置
        int j;  //j用于遍历
        for(j = i+1;j<n;j++){
            if(compare(a[j], a[k])){   //如果遍历的小于记录的话         
                k = j;   //k用于记录下标记，记录最小值
            }
        }
        if(k!=i){
            int temp = a[i]; //把最小值换到前一个位置
            a[i] = a[k];
            a[k] = temp;
        }
    }
}
int main(void)
{
    
    int a[] = {1,2,3,4,5};
    printf("%d\n\n\n",brnarySearch(a,5,3));
    int b[] = {1,9,3,7,8,4};
    Sort3(b,5,Asend);
    for(int i = 0;i<5;i++){
        printf("%d\n",b[i]);
    }
    Sort3(b,5,Dsend);
    for(int i = 0;i<5;i++){
        printf("%d\n",b[i]);
    }
    
    
    return 0;
}
