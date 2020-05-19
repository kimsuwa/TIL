#include<stdio.h>
int main() {
	int a, b, c;

	printf("세 변의 길이를 입력하시오:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("삼각형인가요?\n");

	// 가장 긴 변 < 나머지 두 변의 합
	if (a > b + c) printf("YES\n");
	else if (b > a + c) printf("YES\n");
	else if (c > a + b) printf("YES\n");
	else printf("NO\n");

	return 0;
}