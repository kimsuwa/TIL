#include<stdio.h>
int main() {
	int a, b, c;

	printf("�� ���� ���̸� �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("�ﰢ���ΰ���?\n");

	// ���� �� �� < ������ �� ���� ��
	if (a > b + c) printf("YES\n");
	else if (b > a + c) printf("YES\n");
	else if (c > a + b) printf("YES\n");
	else printf("NO\n");

	return 0;
}