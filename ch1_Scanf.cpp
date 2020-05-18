#include<stdio.h>
int main() {
	int a, b, c, d, e;
	double f;
	float fa, fb, fc;

	printf("정수 두 개를 입력하시오:");
	scanf_s("%d %d", &a,&b);
	c = a + b;
	d = a / b; 
	e = a % b; 
	f = (double) (a + b) / 2; //2.0으로 나누어주면 자동 형변환되어 (double) 없어도 실행 됨
	printf("%d+%d = %d\n", a, b, c);
	printf("%d/%d의 몫: %d, 나머지: %d \n", a, b, d, e);
	printf("두 수의 평균은:%f\n\n", f);

	printf("소수 두 개를 입력하시오: ");
	scanf_s("%f %f", &fa, &fb);
	fc = fa * fb;
	printf("%0.2fX%0.2f=%0.3f\n\n", fa, fb, fc);

}