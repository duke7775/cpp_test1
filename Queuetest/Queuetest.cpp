//入队，出队，打印
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
struct queue {
	Node* front;
	Node* rear;
};


queue* create_queue() {
	queue* new_queue = (queue*)malloc(sizeof(queue));
	new_queue->front = NULL;
	new_queue->rear = NULL;
	return new_queue;
}

void enqueue(queue* new_queue, int data) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;
	if (new_queue->rear == NULL) {
		new_queue->front = new_node;
		new_queue->rear = new_node;
	}
	else {
		new_queue->rear->next = new_node;
		new_queue->rear = new_node;
	}
}

void dequeue(queue* new_queue) {
	if (new_queue->front == NULL) {
		printf("队列为空");
	}
	else {
		Node* temp = new_queue->front;
		new_queue->front = new_queue->front->next;
		free(temp);
	}
}

void print_queue(queue* new_queue) {
	if (new_queue->front == NULL) {
		printf("队列为空");
	}
	else {
		Node* p = new_queue->front;
		while (p != NULL) {
			printf("%d ", p->data);
			p = p->next;
		}
	}printf("\n");
}

int main() {
	queue* q = create_queue();
	enqueue(q, 1);
	print_queue(q);
	enqueue(q, 2);
	print_queue(q);
	enqueue(q, 3);
	print_queue(q);
	dequeue(q);
	print_queue(q);
	dequeue(q);
	print_queue(q);
	getchar();
	return 0;
}