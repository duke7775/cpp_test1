//test6.cpp 
//

#include <iostream>

// 打印数组元素
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}


int main()
{
	int array[5] = { 1,2,3,4,5 };
	printf("array size: %zu\n", sizeof(array));
	int lenth = sizeof(array) / sizeof(array[0]);
	printf("array lenth: %d\n", lenth);

	printArray(array, 5);

	int array2[5] = { 60,70,80,90,100 };
	int max = array2[0];  //假定第一个元素最大
	for (int i = 0; i < 5; i++) {
		if (array2[i] > max) {
			max = array2[i];
		}
	}
	printf("max: %d\n", max);

	int array3[5][2] = { {1,2}, {3,4},{5,6},{7,8},{9,10} }; //二维数组
	printf("array3 size: %zu\n", sizeof(array3));

	getchar();
	return 0;
}
