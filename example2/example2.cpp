//输入某年某月某日，判断这一天是这一年的第几天？
#include <stdio.h>


int isleapyear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		return 1;
	}
	return 0;
}


int main() {
	int year, month, day;
	int daysinmonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int totaldays = 0;
	printf("输入年,月,日");
	scanf_s("%d%d%d", &year, &month, &day);

	if (isleapyear(year)) {
        daysinmonth[1] = 29;

	}
	for (int i = 0; i < month - 1; i++) {
		totaldays += daysinmonth[i];

	}
	totaldays += day;
	printf("%d年%d月%d日是今年的第%d 天\n", year, month, day, totaldays);
	getchar();
	return 0;

}