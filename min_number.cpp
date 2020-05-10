#include<stdio.h>
int main() {
	int a, b, c;

	// 두 수 중 작은 수 출력
	printf("Write two number:");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("%d\n", b);
		if (b % 2 == 0) printf("YES\n"); //짝수이면 YES 출력
		else printf("NO\n");
	}
	else if(a==0 && b==0){
		printf("zero\n");
	}
	else {
		printf("%d\n", a);
		if (a % 2 == 0) printf("YES\n");
		else printf("NO\n");
	}

	// 세 수 중 제일 작은 수 출력
	printf("Write three number:");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (b > c) printf("%d\n", c);
		else printf("%d\n", b);
	}
	else
	{
		if (a > c) printf("%d\n", c);
		else printf("%d\n", a);
	}
		
}