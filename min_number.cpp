#include<stdio.h>
int main() {
	int a, b, c;

	// �� �� �� ���� �� ���
	printf("Write two number:");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("%d\n", b);
		if (b % 2 == 0) printf("YES\n"); //¦���̸� YES ���
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

	// �� �� �� ���� ���� �� ���
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