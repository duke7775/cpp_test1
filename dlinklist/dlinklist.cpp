#include<stdio.h>
#include<stdlib.h>



struct Node {
	int data;
	Node* next;
	Node* pre;
};

Node* g_header = NULL;

void head_insert(int data) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->pre = NULL;
	new_node->next = NULL;
	if (g_header == NULL) {
		g_header = new_node;
	}
	else {
		new_node->pre = g_header;
		new_node->next = g_header->next;
		g_header->next = new_node;
		if (new_node->next != NULL) {
			new_node->next->pre = new_node;
		}
	}
}

void tail_insert(int data) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->pre = NULL;
	new_node->next = NULL;
	if (g_header == NULL) {
		g_header = new_node;
	}
	else {
		Node* tail = g_header;
		while(tail->next != NULL){
			tail = tail->next;
		}
		tail->next = new_node;
		new_node->pre = tail;
	}

}

void delete_value(int data) {
	Node* temp = g_header;
	while (temp != NULL) {
		Node* next = temp->next;
		if (temp->data == data) {
			if (temp == g_header) { //删除为头节点
				g_header = temp->next;
				free(temp);
			}
			else {
				if (temp->next != NULL) { //删除节点的下一个节点不为空
					temp->next->pre = temp->pre;
					temp->pre->next = temp->next;
					free(temp);
				}
				else {	//删除为尾节点
					temp->pre->next = NULL;
					free(temp);
				}
			}
		}
	 temp = next;
	}
}


void print_list(Node* g_header){
	for (Node* p = g_header; p; p = p->next) {
		printf("%d", p->data);
	}
	printf("\n");
}



int main() {
	head_insert(1);
	print_list(g_header);
	head_insert(2);
	print_list(g_header);
	head_insert(3);
	print_list(g_header);
	tail_insert(4);
	print_list(g_header);
	tail_insert(5);
	print_list(g_header);
	delete_value(4);
	print_list(g_header);
	delete_value(3);
	print_list(g_header);
	getchar();
	return 1;
}