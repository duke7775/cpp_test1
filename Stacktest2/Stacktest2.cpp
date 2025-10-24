#include<stdlib.h>
#include<stdio.h>

struct Node {
	int data;
	struct Node* next;
};
struct Stack {
	Node* array;
	int top;
	int size;
};

struct Stack* create_stack() {
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack->top = -1;
	stack->size = 5;
	stack->array = (Node*)malloc(stack->size * sizeof(Node));
	return stack;

}

void push(Stack* stack, int value) {
	if (stack->top == stack->size - 1) {//扩展容量
		stack->size *= 2;
		Node* new_array = (Node*)malloc(stack->size * sizeof(struct Node));
		for (int i = 0; i <= stack->top; i++) {//复制数据
			new_array[i] = stack->array[i];
		}
		free(stack->array);
		stack->array = new_array;
	}
	stack->top++;
	stack->array[stack->top].data = value;
}

void pop(Stack* stack) {
	if (stack->top == -1) {
		printf( "栈为空\n" );
	}
	stack->top--;
}

void print_stack(Stack* stack) {
	if (stack->top == -1) {
		printf("栈为空");
	}
	for (int i = stack->top; i >= 0; i--) {
		printf("%d ", stack->array[i].data);
	}
	printf("size: %d\n", stack->top+1);
}

int main() {
	Stack* new_stack = create_stack();
	push(new_stack, 1);
	print_stack(new_stack);
	push(new_stack, 2);
	print_stack(new_stack);
	push(new_stack, 3);
	print_stack(new_stack);
	push(new_stack, 4);
	print_stack(new_stack);
	push(new_stack, 5);
	print_stack(new_stack);
	push(new_stack, 6);
	print_stack(new_stack);
	push(new_stack, 7);
	print_stack(new_stack);
	pop(new_stack);
	print_stack(new_stack);
	pop(new_stack);
	print_stack(new_stack);
	pop(new_stack);
	print_stack(new_stack);
	getchar();
	return 0;
}