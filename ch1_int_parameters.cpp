#include<stdio.h>
int main() {
	int a, b = 3; //정수형 변수 (32bit = 4byte); (-) 2^31 ~ 2^31 - 1 :(-)2147483648 ~ 2147483647 숫자 입력 가능
				  // 만약 2147484638 입력 시, overflow 되어 (-)2147483648 출력됨
				  // 최상위 비트는 부호(0:양수, 1:음수) 

	a = b + 2; // a = 5  (오른 쪽 의 b+2 가 먼저 연산되어 a 변수에 저장)
	a = a * 2; // a = 10
	a = a - 3; // a = 7 
	a = a / 3; // a = 2
	printf("%d", a);
	return 0;
}