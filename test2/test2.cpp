// 说明：定义常量变量，使用add函数
#include <stdio.h>
#define WIDTH 10
const double PI = 3.1415;
//  功能: 相加
int add(int a, int b) {
	return a + b;
}

int main() {
	int a = 5;
	char b ='c';
	double c = 3.14;
	float d = 3.14f;
	printf("%d\n", a);
	printf("%c\n", b);
	printf("%lf\n", c);
	printf("%f\n", d);
	
	int result = add(5, 5);
	printf("Result of addition: %d\n", result);
	getchar();
	return 0;
}