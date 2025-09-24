//头插法
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {  //定义节点结构体
 	int data; //数据域
	struct Node* next;//指针域
} Node, LinkList;


LinkList* insertListHead(LinkList* list, int data) {
	LinkList* newNode = (LinkList*)malloc(sizeof(LinkList));//创建新节点
	newNode->data = data; // 赋值
	newNode->next = list->next; //新节点指向原来的第一个节点
	list->next = newNode;  //头节点指向新节点
	return list;
}

void printList(LinkList* list) { //打印链表
	LinkList* p = list->next;//指向第一个节点
	while (p) { //遍历链表,当指针为空时结束
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	LinkList* list = (LinkList*)malloc(sizeof(LinkList));//创建头节点
	list->next = NULL;//初始化头节点
	//头插入
	list = insertListHead(list, 3);
	list = insertListHead(list, 5);
	list = insertListHead(list, 7);

	printList(list);
	getchar();
	return 0;

	
}