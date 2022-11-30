typedef int Position;
typedef int bool;
#define true 1
#define false 0
#define ERROR 0
#define NULL 0

typedef struct SNode* PtrToStack;
typedef int ElementType;
struct SNode {
    ElementType Data; 
    PtrToStack Next;
};
typedef PtrToStack Stack;

Stack CreateStack()
{
    //构建一个头结点并且返回
    Stack S = (Stack)malloc(sizeof(struct SNode));
    if(S)
    {
        S->Next=NULL;
        return S;
    }
}
bool IsEmpty(Stack S)
{
    return S->Next == NULL;
}
bool Push(Stack S,ElementType X)
{
    Stack temp = (Stack)malloc(sizeof(struct SNode));
    temp ->Data = X;
    temp->Next = S->Next;
    S->Next = temp;
    return true;
}
ElementType Pop(Stack S)
{
    if(IsEmpty(S))
    {
        printf("Empty\n");
    }
    else
    {
        Stack FirstCell = S->Next;
        ElementType TopElement = FirstCell->Data;
        
        //头节点指针指向第一个元素的下一个
        S->Next = FirstCell->Next;
        
        free(FirstCell);
        return TopElement;
    }
}
