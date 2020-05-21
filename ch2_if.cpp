#include<stdio.h>
int main() {
	int a=5, b=5, k;
	int eng = 90;

	if (a != b)		//'!='  not을 의미
		a = a + b;	// a와 b가 같기 때문에 그대로 a는 5 값을 출력한다.
	printf("%d\n", a);
	
	if (a > 0) {	// if 가 두 개 있으면 둘 다 실행
		b++;		// b<=6
		k = a + b;  // k<=11
	}
	else {			// else 가 있을 경우 if 또는 else 만 실행함
		b--;
		k = a + b;
	}
	printf("%d\n", k);

	if (eng >= 90) k += 1; // k<=12
	if (eng >= 80) k += 2; // k<=14
	if (eng >= 70) k += 3; // k<=17
	printf("%d\n", k);
	
	if (eng >= 90) printf("Excellent\n"); // 90점이 입력되었으니 excellenet가 출력됨
	else if (eng >= 80) printf("good\n");
	else if (eng >= 70) printf("just soso\n");
	else printf("You need effort!");
	
	
	return 0;

}