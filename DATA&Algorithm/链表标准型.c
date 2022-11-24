#include <stdio.h>
#include <stdlib.h>
typedef struct Node* L;//struct Node 指针
typedef struct Node{	//main body
	int value;
	L next;
}Node;
typedef struct Head{
	L head; 
}List;			//Head pointer

void create(List *plist,int number)//后插入
{
	L node = (L)malloc(sizeof(L));
	node->value = number;
	node->next = NULL;
	
	L last = plist->head;
	if(!last)// 防止segementationfalut
	{
		plist->head = node;
	}else
	{
		for(;last->next;last=last->next);
		node->next = last->next;
		last->next = node;     //->指向的是真的改变的
		//后插型，队列
	}
}
void crate(L* list,int number)
{
    L p = (L)malloc(sizeof(L));

    p->value = number;
    p->next =NULL;
    //插到前面去，改头指针,堆栈
    p->next = *list;
    *list = p;     //改变指针,用双重指针

}

int main()
{
	List list;       //set up a head pointer
	list.head=  NULL;
	int number;
	do{
		scanf("%d", &number);
		if(number != -1)
		create(&list,number);

	}while(number != -1);

	printf("\n");
	L p = list.head;	
	for( ;p;p=p->next)
	{
		printf("%d\n",p->value);
	}
	return 0;	

}
