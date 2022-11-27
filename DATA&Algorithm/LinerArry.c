#define MAXSIZE 10   //线性表容量
#define ERROR -1
typedef int bool;//可能有C语言版本不支持bool
#define true 1
#define false 0

//抽象数据类型
typedef int ElementType;
//线性表下标号
typedef int Position;
// List 为指向 struct Node 的指针
typedef struct LNode* List;
struct LNode {
    ElementType Data[MAXSIZE]; //用数组形式的线性表
    Position Last;
};

//初始化，以赋值的形式来返回
List MakeEmpty()
{
    List L;
    L = (List)malloc(sizeof(struct LNode));
    //这里初始化为-1，当它有数据时，第一个就是0了
    L->Last = -1;
    return  L;
}

//查找,返回下标
Position Find(List L, ElementType X)
{
    Position i;
    //查找的范围是 0~L-last，
    //当L->last = -1时，不进入循环
    //当超过了范围或者找到了就可以停止遍历了
    for(i = 0; i <= L->Last && L->Data[i] != X;i++);/////////////////////////
    //要进入循环两个条件缺一不可，若i=last 但是找到了
    //还是会退出，此时 i++ 不执行
    //当循环完全走完，说明没有找到元素i>L->last
    if(i > L->Last) 
    {
        return ERROR;
    }
    else 
        return i;
}
/* 插入 */
bool Insert(List L, ElementType X, Position P)
{
    /* 首先要判断是否可以操作 1表满 2位置是否可操作*/
    //因为是数组实现，所以要判断maxsize
    // P<0 和 P >L->last +1都是越界，后者让表不连续
    if(L->Last==MAXSIZE-1||P<0||P>L->Last+1)//////////////////////////////
    {
        printf("list is full!\n");
        return false;
    }
    //往后挪了腾出空间再更改，由后面元素开始，i--
    //i用了闭区间,可以防止访问溢出
    Position i= L->Last;
    for(;i>=P;i--){L->Data[i+1]=L->Data[i];};/////////////////////////////
    L->Data[i]=X;
    L->Last++;
    return true;
}
/* 删除 */
bool Delete(List L,Position P)
{
    Position i;
    if(P<0||P > L->Last){
        printf("wrong Delete");
        return false;
    }
    //删除从元素前面开始操作 i
    for(i=P;i<L->Last;i++){L->Data[i]=L->Data[i+1];}////////////////////////////////////////////////////

    L->Last--;//last指向最后的元素
    return true;
}
