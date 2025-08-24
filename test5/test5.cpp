// test5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <iostream>


//声明全局变量
int g_val = 10;


bool Enroll(int age) {
	int g_val = 20;
	printf("Enroll函数中g_val的值为: %d\n", g_val);

	if (3 < age && age < 7) {
		printf("同意入园\n");
		return true;
	}
	printf("不同意入园\n");
	return false;
}

int find_target(int arr[], int size, int target) {
	int g_val = 30;
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
	Enroll(age);
	
	int arr[] = { 1,2,3,4,5};
	int target = 11;
	int size = sizeof(arr) / sizeof(int);
    find_target(arr, size, target);
	
	getchar();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件