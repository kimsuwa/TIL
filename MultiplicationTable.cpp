#include<stdio.h>
int main() {
	int i, j, result=0;

	printf("��� ���� ������� �Է��ϼ���:");
	scanf_s("%d",&j);

	for (i = 1; i < 10; i++) {
		result = i * j;
		printf("%d * %d = %d\n",j,i, result);
	}
}