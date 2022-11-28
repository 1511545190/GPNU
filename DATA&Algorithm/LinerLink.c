#include <stdio.h>
#define ERROR NULL
typedef int bool;//可能有C语言版本不支持bool
#define true 1
#define false 0
#include <stdio.h>
#include <stdlib.h>
//抽象数据类型
typedef int ElementType;

typedef struct LNode* PtrToLNode;
typedef PtrToLNode Position;
typedef PtrToLNode List;

struct LNode {
    ElementType Data; //用链表形式的线性表
    PtrToLNode Next;
};
List setup()
{
    return (List)malloc(sizeof(struct LNode));
}

//插入
bool Insert(List L, ElementType X, Position P)
{
    //考虑L空？？默认头结点存在， P 可找到？
    /* 在单链表的第一个结点之前附设一个结点，它没有直接前驱，称之为头结点。 */
    //有头节点就不用改变头部了，直接用next访问，不需要指针的指针来改变指针
    Position pre;//查找前一个节点
                        //找到了或者到最后了
    //pre没有malloc没有指针域，当传入的是头结点的下一个一个节点的时候
    //直接用next访问for语句才真正可以执行
    for(pre=L;pre->Next!=P && pre;pre=pre->Next);
    
    if(pre == NULL)//没找到
    {
        return false;
    }else{

    List tmp = (Position)malloc(sizeof(struct LNode)); /* 申请、填装结点 */
    tmp->Data = X; tmp->Next = NULL;
    //在p之前插入
    tmp->Next = P;
    pre->Next = tmp;
    //如果在之后
    /* 
        tmp->next=p->next;
        P->next = tmp;
     */
        return true;
    }
}

/* search  按值*/
Position Find(List L,ElementType X)
{
    Position P = L;
    //最后一个也要找所以要用 P 而不是 P->next
    while(P->Data!=X&& P){P=P->Next;};
    if(P!=NULL)//找到了
    {
        return P;
    }else
    {
        return NULL;
    }
}

//带头结点的删除,（意味着头结点不需要删除
bool Delete(List L, Position P)
{
    Position pre;
    for(pre =L;pre->Next != P && pre;pre= pre->Next);
    //删除是否合法
    if(pre == NULL)
    {
        printf("invalid delete!\n","no");
        return false;
    }
    else{
        //现在pre是前一个元素
        pre->Next = P->Next;
        free(P);
        return true;
    }
}

int main()
{
    List list = setup();
    Position i = list;
    //Position e = list->Next;//只复制一级地址
    int count;
    for(count = 0;count<5;count++,i=i->Next)
    {
        Insert(list,count+1,i->Next);
    }
    i = list;
    for(count = 0;count<5;count++,i=i->Next)
    {
        printf("%d ",i->Next->Data);
    }





}
