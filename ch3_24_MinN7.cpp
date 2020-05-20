#include<stdio.h>
int main() {
	/*int a, b;

	printf("Please input 7 numbers:");
	scanf_s("%d", &a);

	for (int i = 1; i < 7; i++) {
		scanf_s("%d",&b);
		if (b < a) a = b;
	}
	printf("%d", a); */

	int i, min = 2147000000, a; // min은 가능한 최대의 수를 기입
								// for문 1회 돌 때, if문이 무조건 참인 조건되도록
	for (i = 1; i <= 7; i++) {
		scanf_s("%d",&a);
		if (a < min) min = a; 
	}
	printf("%d\n",min);
	
}