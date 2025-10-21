//出栈，入栈，打印栈
#include<stdio.h>
#include<stdlib.h>

struct Stack {
	int data[5];
	int top;

};
Stack* create_stack(){
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack-> top = -1;
	return stack;
}

void push(Stack* stack, int value) {
	if (stack->top < 4) {
		stack->top++;
		stack->data[stack->top] = value;
	}
	else {
		printf("栈已满");
	}
}	

void pop(Stack* stack) {
	if (stack->top == -1) {
		printf("栈为空");
	}
	else {
		stack->top--;
	}
	}

void print_stack(Stack* stack) {
	if (stack->top == -1) {
		printf("栈为空\n");
	}
	else {
		for(int i = 0;i <=stack->top;i++){
			printf("%d ", stack->data[i]);
	}
	printf("\n");
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