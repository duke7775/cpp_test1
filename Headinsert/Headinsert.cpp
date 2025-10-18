//链表插入，删除，打印
#include <stdio.h>
#include <stdlib.h>

 struct Node {
	 int data;
	 Node* next;
};

Node* g_header = NULL;

void head_insert(int data) { //头部增加
	Node* newnode = (Node*)malloc(sizeof(Node));

	newnode->data = data;
	newnode->next = NULL;

	if (g_header ==NULL) {
		g_header = newnode;
	}
	else {
		newnode->next = g_header->next;
		g_header->next = newnode;
	}
}

void tail_insert(int data) {	//尾部增加
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = NULL;
	if (g_header == NULL) {
		g_header = newnode;
	}
	else {
		Node* tail = NULL;
		for (tail = g_header;tail->next != NULL ; tail= tail->next) {
		}
		tail->next = newnode;
	}

}
void delete_value(int data) {	 //按值删除
	Node* d = g_header;
	Node* front = NULL;
	while (d != NULL) {
		Node* next = d->next;
		if (d->data == data) {
			if (d == g_header) {
				g_header = next;
				free(d);
			}
			else {
				front->next = next;
				free(d);
			}
		}
		else {
			front = d;
		}
		d = next;
	}
}

void print_list(Node* header) {  //打印链表
	for (Node* p = header; p; p = p->next) {
		printf("%d", p->data);
	}
}

int main() {
	head_insert(3);
	head_insert(5);
	head_insert(6);
	head_insert(7);
	tail_insert(4);
	tail_insert(5);
	tail_insert(6);
	tail_insert(7);
	delete_value(7);
	print_list(g_header);
	getchar();
	return 0;
}
