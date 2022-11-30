typedef int Position;
typedef int bool;
#define true 1
#define false 0
#define ERROR 0
typedef int ElementType;
struct SNode {
    ElementType *Data; //存储的数组
    Position Top;
    int MaxSize;
};

typedef struct SNode* Stack;

Stack CreateStack(int Maxsize)
{
    //初始化Stack 和 它的data数组
    Stack S = (Stack)malloc(sizeof(struct SNode));
    S->Data = (ElementType *)malloc(sizeof(ElementType)*Maxsize);
    S->Top = -1;//初始化栈针为-1
    return S;
}

bool IsFull(Stack S)
{
    //ptr start with 0 so there is
    // s->max size -1
    return (S->Top == S->MaxSize-1);
}

bool IsEmpty(Stack S)
{
    return (S->Top == -1);
}

bool Push(Stack S,ElementType X)
{
    if(IsFull(S))
    {
        printf("FULL\n");
        return false;
    }
    else{
        //push 进入上一个位置
        S->Data[++(S->Top)] = X;
        return true;
    }
}

ElementType Pop(Stack S)
{
    if(IsEmpty(S))
    {
        printf("Empty stack\n");
        return ERROR;
    }
    else
    {
        return S->Data[(S->Top)--];
    }
}

