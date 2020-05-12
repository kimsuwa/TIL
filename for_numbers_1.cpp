#include<stdio.h>
int main() {
	int i, j, sum=0, count = 0;
	printf("20 이하의 자연수를 입력하세요:");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		printf("%d ", i);
	}

	printf("\n\n20 이하의 자연수를 입력하세요(홀수 출력): ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (i%2 != 0) printf("%d ", i);
	}

	printf("\n\n20 이하의 자연수를 입력하세요(합 출력): ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		sum += i;
	}
	printf("%d \n", sum);

	printf("\n\n50이하의 자연수를 입력하시오(짝수의 갯수 출력):");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (i % 2 == 0)
			count++;
	}
	printf("%d\n", count);

	printf("\n\n50이하의 자연수를 입력하시오(약수 출력):");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (j % i == 0) printf("%d \n", i);
	}

	return 0;
}