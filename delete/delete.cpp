//尾插法，头删除，尾删除
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	int data;
	struct Node* next;
}Node, Linklist;


Linklist* tailinsert(Linklist* list, int data) {  //尾插法
	Linklist* newNode = (Linklist*)malloc(sizeof(Linklist));// 创建新节点
	Linklist* r = list; //尾节点
	while (r->next != NULL) {
		r = r->next;
	}
	newNode->data = data;
	r->next = newNode;
	newNode->next = NULL;
	return list;
}

void printList(Linklist* list) {//打印链表
	Linklist* p = list->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}


Linklist* headdelete(Linklist* list) {    //头删除
	Linklist* del = list->next;
	list->next = del->next;
	free(del);
	return list;
}

Linklist* taildelete(Linklist* list) { //尾删除 
	Linklist* del = list;
	while (del->next->next != NULL) {
		del = del->next;
	}
	free(del->next);
	del->next = NULL;
	return list;

}


int main() {
	Linklist* list = (Linklist*)malloc(sizeof(Linklist));
	list->next = NULL;
	list = tailinsert(list, 2);
	list = tailinsert(list, 3);
	list = tailinsert(list, 4);
	list = tailinsert(list, 5);
	printList(list);

	headdelete(list);
	printList(list);

	taildelete(list);
	printList(list);

	getchar();
	return 0;
}
