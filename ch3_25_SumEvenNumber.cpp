#include<stdio.h>
int main() {
	int a, min=2147000000, sum=0; 
	printf("Please input seven numbers:");

	for (int i = 1; i <= 7; i++) {
		scanf_s("%d",&a);
		if (a % 2 != 0) {
			sum = sum + a;
			if (a <= min) min = a;
		}

	}
	printf("Ȧ���� �հ�� %d\n",sum);
	printf("Ȧ�� �� �ּҰ��� %d\n",min);
}