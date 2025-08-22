// test4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <string.h>
#include <iostream>


struct tagStudent {
    int nID;
    char szName[32];
    char szNational[32];
    float fMathScore;
};

struct tagData {
	int nID;
    double dUnkonwn;
	char szName[32];
	char szNational[32];
    float fMathScore;
};

int main()
{
    struct tagStudent student;
	printf("结构体大小: %zu\n", sizeof(student));
    
    struct tagStudent tom;
    struct tagStudent* ptr = &tom;

	//使用tom赋值
    int nID = 100;
    char szName[] = "Tom";
    char szNational[] = "chinese";
    float fMathScore = 95.5;

	printf("\n使用tom赋值:\n");
	printf("nIDID: %d\n", nID);
	printf("szName: %s\n", szName);
	printf("szNational: %s\n", szNational);
    printf("fMathScore: %.2f\n", fMathScore);
    
    //使用ptr赋值
    ptr->nID = 1000;
	ptr->fMathScore = 99.5;
    strcpy_s(ptr->szName, "jack");
	strcpy_s(ptr->szNational, "english");

	printf("\n使用ptr赋值:\n");
	printf("nIDID: %d\n", ptr->nID);
	printf("szName: %s\n", ptr->szName);
	printf("szNational: %s\n", ptr->szNational);
    printf("fMathScore: %.2f\n", ptr->fMathScore);
    
	// 字节对齐
    struct tagData data;
    printf("\n结构体大小； % zu\n", sizeof(data));

    
    // 字符串操作
    char s1[64] = "hx123456";
    char s2[64] = "hello,world!";
    int ch = '1';
    char* result;

    strcpy_s(s1, s2);
	printf("\nstrcpy后的s1: %s\n", s1);

    strcat_s(s1, s2);
	printf("strcat后的s1: %s\n", s1);

    size_t len = strlen(s1);
	printf("strlen后的s1长度: %zu\n", len);

	strcpy_s(s1, "hx123456");
    int cmp = strcmp(s1, s2);
	printf("strcmp后的s1: %d\n", strcmp(s1, s2));
    
	result = strchr(s1, ch);
    printf("strchr后的s1: %s\n", result ? result : "未找到字符");

    result = strstr(s1, s2);
	printf("strstr后的s1: %s\n", result ? result : "未找到子串");

	getchar(); // 等待用户输入
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
