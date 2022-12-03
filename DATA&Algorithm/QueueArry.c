#include <stdio.h>
#include <stdlib.h>
#define bool int
#define false 0
#define true 1
#define ERROR -1
typedef int ElementType;
typedef int Position;
struct QNode {
	ElementType* Data;
	//头指针，尾指针
	Position Front, Rear;
	int MaxSize;
};
typedef struct QNode* Queue;
Queue CreateQueue(int MaxSize)
{
	Queue Q = (Queue)malloc(sizeof(struct QNode)); 
	Q->Data = (ElementType*)malloc(sizeof(struct QNode));

	//初始化
	Q->Front = Q->Rear =0;
	Q->MaxSize = MaxSize;

	return Q;
}

bool IsFull( Queue Q)
{
	//若头指针和尾指针差一个重合则满(因为是环状的队列，头指针会变化，尾指针也会变化)
	//%Q->maxsize 
	return (Q->Rear +1)%Q->MaxSize == Q->Front;
}

bool IsEmpty(Queue Q)
{
	return (Q->Rear == Q->Front);
}

bool AddQ(Queue Q,ElementType X)
{
	if(IsFull(Q))
	{
		printf("Queue full\n");
		return false;
	}
	else 
	{
		//循环处理法
		Q->Rear = (Q->Rear+1)%Q->MaxSize;
		Q->Data[Q->Rear] = X;
		return true;
	}
}

ElementType DleteQ(Queue Q)
{
	if(IsEmpty(Q))
	{
		printf("Empty\n");
		return ERROR;
	}
	else
	{
		Q->Front = (Q->Front+1)%Q->MaxSize;
		return Q->Data[Q->Front];
	}
}

int main()
{
	Queue q = CreateQueue(10);
	for(int i =0;i<10;i++)
	{
		AddQ(q,i);
	}
	for(int i =0;i<10;i++)
	{
		printf("%d",DleteQ(q));
	}

	return 0;
}
