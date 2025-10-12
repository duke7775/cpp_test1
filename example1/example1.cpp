//问：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>


int main() {
	int a, b, c;
	for (a = 1; a < 5; a++) {
		for (b = 1; b < 5; b++) {
			for (c = 1; c < 5; c++) {
				if (a != b && a != c && b != c) {
					printf("%d%d%d\n", a, b, c);
				}
			}
		}
	}


}
