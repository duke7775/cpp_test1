// test5.cpp : 
//

#include <stdio.h>
#include <iostream>


//声明全局变量
int g_val = 10;

//判断年龄是否符合入园要求
bool CheckEnrollment(int age) {
	g_val = 20;
	printf("Enroll函数中g_val的值为: %d\n", g_val);

	if (3 < age && age < 7) {
		printf("同意入园\n");
		return true;
	}
	printf("不同意入园\n");
	return false;
}

//在数组中查找目标元素
int find_target(int arr[], int size, int target) {
	g_val = 30;
	printf("find_target函数中的g_val的值为: %d\n", g_val);

	int i = 0;
	while (i < size) { 
		if (arr[i] == target) {
			printf("找到目标元素，索引为: %d\n", i);
			return i;
		}
		else {
			i++;
		}
	}
	printf("未找到目标元素\n");
	return -1;
}
	
int main()
{
	printf("全局变量g_val的值为: %d\n", g_val);
	int age = 5;
	CheckEnrollment(age);
	
	int arr[] = { 1,2,3,4,5};
	int target = 11;
	int size = sizeof(arr) / sizeof(int);
    find_target(arr, size, target);
	
	getchar();
	return 0;
}
