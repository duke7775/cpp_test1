#include<stdio.h>
#include<stdlib.h>

struct Stack {
	int* array;
	int top;
	int size;
};

struct Stack* create_stack() {
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack->top = -1;
	stack->size = 10;
	stack->array = (int*)malloc(stack->size * sizeof(int));
	return stack;

}

void push(Stack* stack, int value) {
	if (stack->top == stack->size - 1) {//扩展容量
		stack->size *= 2;
		stack->array = (int*)malloc(stack->size * sizeof(int));
	}
	stack->top++;
	stack->array[stack->top] = value;

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
		printf("%d ", stack->array[i]);
	}
	printf("size: %d\n", stack->top+1);
}

int main() {
	Stack* new_stack = create_stack();
	push(new_stack, 10);
	print_stack(new_stack);
	push(new_stack, 20);
	print_stack(new_stack);
	push(new_stack, 30);
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