#include<stdio.h>
int main() {
	int i, j, sum=0, count = 0;
	printf("20 ������ �ڿ����� �Է��ϼ���:");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		printf("%d ", i);
	}

	printf("\n\n20 ������ �ڿ����� �Է��ϼ���(Ȧ�� ���): ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (i%2 != 0) printf("%d ", i);
	}

	printf("\n\n20 ������ �ڿ����� �Է��ϼ���(�� ���): ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		sum += i;
	}
	printf("%d \n", sum);

	printf("\n\n50������ �ڿ����� �Է��Ͻÿ�(¦���� ���� ���):");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (i % 2 == 0)
			count++;
	}
	printf("%d\n", count);

	printf("\n\n50������ �ڿ����� �Է��Ͻÿ�(��� ���):");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (j % i == 0) printf("%d \n", i);
	}

	return 0;
}