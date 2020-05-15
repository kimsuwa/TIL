#include<stdio.h>
int main() {
	/*int a, b, c;

	printf("A와 B를 입력하시오(A^B 출력하기):");
	scanf_s("%d %d", &a, &b);

	c = a ; //c 에 a 대입
	for (int i = 1; i < b; i++) {
		c = c * a; //b-1번 a를 곱한다. why? 이미 c=a 대입되어서 1회 돌면 c=a*a 인 제곱 형태
	}
	printf("%d\n", c);
	return 0;*/	
	
	int a, b, c=1; // c=1을 쓰는 것이 신의 한수!

	printf("A와 B를 입력하시오(A^B 출력하기):");
	scanf_s("%d %d", &a, &b);
	
	for (int i=0; i < b; i++) {
		c = c * a; // b번 a가 곱해진다.
	}
	printf("%d\n", c);
	return 0;
}