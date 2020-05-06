#include<stdio.h>
int main() {
	double a;

	printf("실수값을 입력하시오(소수 둘 째 자리까지 입력):");
	scanf_s("%lf", &a);
	// 소수 둘째 자리에서 반올림한 값 출력
	a *= 10;				// 234.6 <= 23.46*10
	a = (int)(a + 0.5);		// 235 <= (int)(234.6+0.5)
	a =  a / 10;			// 23.5

	printf("반올림된 값: %lf\n",a);
}