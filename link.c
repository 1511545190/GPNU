#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
    int value;
    struct _node *next;
} Node;

typedef struct List   //用结构来存贮链表,这样可通过指针被函数更改head
{
    Node *head;
}List;

void add(List* ,int);
void print(List*);
void delete_element(List* list,int number);
void free_list(List*);
int main(void)
{
    
    List list;
    list.head = NULL;
    
    int number;
    do {
        scanf("%d",&number);
        if(number != -1)
        {
            add(&list,number);  //传入list的地址，这样add 中的list->next = head 便不是对值操作
        }
    }while(number != -1);
    print(&list);

    int a =1;
    delete_element(a);

    //删除
    //1 前一个node next指向后面,
    //2 free()
    

    
    return 0;
}

void add(List* plist, int number)
{

    //后加节点
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;

            //find the last 
            Node *last = plist->head;

            if(last)  //当不是第一个节点
            {
                while(last->next)  //当last指向NULL时停止
                {
                last = last->next;
                }
                //attach
                last->next = p;

            }
            else
            {
                plist->head = p;
            }

}

void print(List* plist)
{
    Node *p;

    for(p=plist->head;p;p=p->next)
    {
        printf("value:%d\n",p->value);
    }
    printf("\n");
}

//delete
void delete_element(List* list,int number)
{
    Node*q = NULL;              //q 与 p
    for(Node *p = list.head; p ; q=p,p=p->next )
    {
        if(p->value == number){  //找到的话
            //  H# q#前面的
            //  q# 
            if(q){
                q->next = p-next;
            }else{
                list.head = p->next;       //头指针
            }
            free(p);
            break;
        }
    }
}


void free_list(List* list)
{
    Node *p,*q = NULL;   //q指向后面
    for(p= list->head; p;  p=q)
    {
        q = p->next;
        free(p);
    }
}
//指针也是变量
void wrong_add(Node *head, int number)
{
    Node *p =NULL;
    p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
        

    Node *last = head;
    if(head)
    {
        while(last->next)
        {
            last = last->next;
        }
        last->next = p;

    }
    else
    {
        head = p;                       //不可以，head 是add函数里面的形式参数，相当于把 p的地址给了 内函数的head
    }                                   //对外部没有影响
}

