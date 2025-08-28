// test7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<stdio.h>
#include <iostream>

//全局枚举变量
enum Color { red, green, blue, white }color;

int main() {
	printf("red=%d", red);//访问枚举变量

	enum day { sun, mon, tue, wed, thu, fri, sat };//局部枚举变量
	printf("\nmon=%d", mon);
	enum day today = fri;

	switch(today){
		case mon:
			printf("\nIt's Monday, start of the work week.\n");
			break;
		case wed:
			printf("\nIt's Wednesday, middle of the work week.\n");
			break;
		case fri:
			printf("\nIt's Friday, end of the work week.\n");
			break;
	}
	getchar();
	return 0;
}
