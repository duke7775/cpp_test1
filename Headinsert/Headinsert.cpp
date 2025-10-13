//头插法
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}Node;


void headinsert(Node *list, int data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = list->next;
	list->next = newnode;
}

void printlist(Node* list) {
	for (Node* p = list->next; p; p = p->next) {


		printf("%d", p->data);
	}
	
}

int main() {
	Node list = { 0,NULL };
	headinsert(&list, 3);
	headinsert(&list, 5);
	headinsert(&list, 6);
	printlist(&list);
	getchar();
	return 0;

}