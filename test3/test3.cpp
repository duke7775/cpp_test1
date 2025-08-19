#include <stdio.h>
#include <stdbool.h>
int main()
{
    // 整数
    int nData = 0;
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(nData) = %zu\n", sizeof(nData));
    // 整数指针
    int* pData = 0;
    printf("sizeof(int*) = %zu\n", sizeof(int*));
    printf("sizeof(pData) = %zu\n", sizeof(pData));
    // 浮点数
    float fData = 1.4f;
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(fData) = %zu\n", sizeof(fData));
    // 双精度浮点数
    double dData = 1.2;
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(dData) = %zu\n", sizeof(dData));
    // bool
    bool bData = true;
    printf("sizeof(bool) = %zu\n", sizeof(bool));
    printf("sizeof(bData) = %zu\n", sizeof(bData));
    // 字符
    char cData = 'c';
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(cData) = %zu\n", sizeof(cData));
    // 字符串
    char szData[] = "hello";
    printf("sizeof(char[]) = %zu\n", sizeof(szData));
    printf("sizeof(szData) = %zu\n", sizeof(szData));

    return 0;
}