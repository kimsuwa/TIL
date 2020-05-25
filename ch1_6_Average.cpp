#include<stdio.h>
int main() {
	int a, b, c;
	double d;

	// 100 이하의 세 자연수 입력
	printf("100 이하 세 자연수 입력:");
	scanf_s("%d %d %d", &a, &b, &c);

	// 평균 값을 소수 셋 째 자리에서 반올림하여 출력
	d = (double)(a + b + c) / 3.0;  // d <=4.3333
	d *= 100;				// d <= 433.33
	d = (int)(d+0.5);		// d <= 433 <= int(433.8)
	d /= 100;				// d <= 4.33

	printf("세 자연수의 평균:%lf", d);
}