// DateStruct_Algorithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//链表,线性表  //类数组
typedef int ElementType;
typedef int Position;
typedef struct LNode* List;

struct LNode {
	ElementType Data[10];    
	Position Last;        //存储数量
};

//初始化
List MakeEmpty() {
	//指针要赋予空间
	List L = (List)malloc(sizeof(struct LNode));
	L = NULL;
	L->Last = -1;     //-1初始化第一个就是0了
	return L;
}
//按照值查找  index 超越判断法
Position Find(List L, ElementType X) {
	Position i = 0;
	while (L->Data[i] != X && i <= L->Last)i++;
	if (i > L->Last) return -1;
	else return i;
}

//增加  判断是表否满了，位置是否合理
Position Insert(List L, Position P, ElementType X) {
	if (L->Last == 10 - 1)
	{
		printf("FULL\n");
		return -1;
	}
	//顺序标只能够插入到连接的尾部
	else if (P > L->Last + 1 || P < 0)
	{
		printf("Invalid Insert Position!\n");
		return -1;
	}
	L->Data[P] = X;   //赋值
	L->Last++;        //L仍然指向最后元素	
	return P;
}

//delete                  下标位置
Position Delete(List L, Position P)
{
	if (P < 0||P>L->Last) {
		printf("Invalid Delete!\n");
		return -1;
	}
	

	Position i = P;
	while (i < L->Last)//覆盖法删去数据，当i = L->last 后面没有值来移动
	{
		//数组访问时下标要对应
		L->Data[i] = L->Data[i+1];
		i++;
	}
	L->Last--;
	return P;
	
}
void Print(List list ) {
	//                下标可以输出
	for (int i = 0; i <= list->Last; i++)
	{
		printf("%d ", list->Data[i]);
	}
	printf("\n");
}

int main1()
{
	List list;
	list = MakeEmpty();
	for (int i = 0; i < 10; i++)
	{
		int number;
		scanf("%d", &number);
		Insert(list, i, number);
	}
	
	Print(list);
	Delete(list, 0);
	Print(list);


	free(list);

	return 0;
}


