#include<stdio.h>
int main() {
	int i, j, result=0;

	printf("어느 단을 출력할지 입력하세요:");
	scanf_s("%d",&j);

	for (i = 1; i < 10; i++) {
		result = i * j;
		printf("%d * %d = %d\n",j,i, result);
	}
}