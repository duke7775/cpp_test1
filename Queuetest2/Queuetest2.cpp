#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct queue {
	Node* array;
	int front;
	int rear;
	int size;
};

queue* create_queue() {
	queue* q = (queue*)malloc(sizeof(queue));
	q->front = 0;
	q->rear = -1;
	q->size = 5;
	q->array = (Node*)malloc(q->size * sizeof(Node));
	return q;
}

void enqueue(queue* q, int value) {
	if (q->rear == q->size - 1) { // 如果队列已满
		int new_size = q->size * 2;
		Node* new_array = (Node*)malloc(new_size * sizeof(Node));
		for (int i = q->front; i <= q->rear; i++) {
			new_array[i- q->front].data = q->array[i].data;//复制数据
		}
		q->rear = q->rear - q->front;
		q->front = 0;
		free(q->array);
		q->array = new_array;
		q->size = new_size;
	}
	q->rear++;
	q->array[q->rear].data = value;
}

void dequeue(queue* q) {
	if (q->rear == -1) {
		printf("队列为空\n");
	}
	else {
		q->front++;
	}
}

void print_queue(queue* q) {
	if (q->rear == -1) {
		printf("队列为空");
	}
	else {
		for (int i = q->front; i <= q->rear; i++) {
			printf("%d  ", q->array[i].data);
		}
	}
	printf("\n");
}

int main() {
	queue* q = create_queue();
	enqueue(q, 1);
	print_queue(q);
	enqueue(q, 2);
	print_queue(q);
	enqueue(q, 3);
	print_queue(q);
	enqueue(q, 4);
	print_queue(q);
	enqueue(q, 5);
	print_queue(q);
	enqueue(q, 6);
	print_queue(q);
	dequeue(q);
	print_queue(q);
	enqueue(q, 7);
	print_queue(q);
	getchar();
	return 0;
}