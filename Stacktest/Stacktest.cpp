//出栈，入栈，打印栈
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Stack {
	struct Node* top;
	int size;

};
Stack* create_stack(){
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack-> top = NULL;
	stack->size = 0;
	return stack;
}

void push(Stack* stack, int value) {
	struct Node* new_node = (struct Node*)malloc(sizeof(Node));
	new_node->data = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}	

void pop(Stack* stack) {
	if (stack->top == NULL) {
		printf("栈为空");
	}
	else {
		Node* temp = stack->top;
		stack->top = stack->top->next;
		stack->size--;
		free(temp);
	}
	}

void print_stack(Stack* stack) {
	if (stack->top == NULL) {
		printf("栈为空\n");
	}
	else {
		Node* temp = stack->top;
		while(temp != NULL){
			printf("%d ", temp->data);
			temp = temp->next;
	}
	printf("size: %d\n",stack->size);
	}
}

int main() {
	Stack* new_stack = create_stack();
	push(new_stack,10);
	print_stack(new_stack);
	push(new_stack, 20);
	print_stack(new_stack);
	push(new_stack, 30);
	print_stack(new_stack);
	pop(new_stack);
	print_stack(new_stack);
	pop(new_stack);
	print_stack(new_stack);



	getchar();
	return 1;
}