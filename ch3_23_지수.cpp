#include<stdio.h>
int main() {
	/*int a, b, c;

	printf("A�� B�� �Է��Ͻÿ�(A^B ����ϱ�):");
	scanf_s("%d %d", &a, &b);

	c = a ; //c �� a ����
	for (int i = 1; i < b; i++) {
		c = c * a; //b-1�� a�� ���Ѵ�. why? �̹� c=a ���ԵǾ 1ȸ ���� c=a*a �� ���� ����
	}
	printf("%d\n", c);
	return 0;*/	
	
	int a, b, c=1; // c=1�� ���� ���� ���� �Ѽ�!

	printf("A�� B�� �Է��Ͻÿ�(A^B ����ϱ�):");
	scanf_s("%d %d", &a, &b);
	
	for (int i=0; i < b; i++) {
		c = c * a; // b�� a�� ��������.
	}
	printf("%d\n", c);
	return 0;
}