#include<stdio.h>
int main() {
	int a, b, c, d, e;
	double f;
	float fa, fb, fc;

	printf("���� �� ���� �Է��Ͻÿ�:");
	scanf_s("%d %d", &a,&b);
	c = a + b;
	d = a / b; 
	e = a % b; 
	f = (double) (a + b) / 2; //2.0���� �������ָ� �ڵ� ����ȯ�Ǿ� (double) ��� ���� ��
	printf("%d+%d = %d\n", a, b, c);
	printf("%d/%d�� ��: %d, ������: %d \n", a, b, d, e);
	printf("�� ���� �����:%f\n\n", f);

	printf("�Ҽ� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%f %f", &fa, &fb);
	fc = fa * fb;
	printf("%0.2fX%0.2f=%0.3f\n\n", fa, fb, fc);

}