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
	printf("홀수의 합계는 %d\n",sum);
	printf("홀수 중 최소값은 %d\n",min);
}