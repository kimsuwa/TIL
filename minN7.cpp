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

	int i, min = 2147000000, a; // min�� ������ �ִ��� ���� ����
								// for�� 1ȸ �� ��, if���� ������ ���� ���ǵǵ���
	for (i = 1; i <= 7; i++) {
		scanf_s("%d",&a);
		if (a < min) min = a; 
	}
	printf("%d\n",min);
	
}