#include<stdio.h>
int main() {
	int a=5, b=5, k;
	int eng = 90;

	if (a != b)		//'!='  not�� �ǹ�
		a = a + b;	// a�� b�� ���� ������ �״�� a�� 5 ���� ����Ѵ�.
	printf("%d\n", a);
	
	if (a > 0) {	// if �� �� �� ������ �� �� ����
		b++;		// b<=6
		k = a + b;  // k<=11
	}
	else {			// else �� ���� ��� if �Ǵ� else �� ������
		b--;
		k = a + b;
	}
	printf("%d\n", k);

	if (eng >= 90) k += 1; // k<=12
	if (eng >= 80) k += 2; // k<=14
	if (eng >= 70) k += 3; // k<=17
	printf("%d\n", k);
	
	if (eng >= 90) printf("Excellent\n"); // 90���� �ԷµǾ����� excellenet�� ��µ�
	else if (eng >= 80) printf("good\n");
	else if (eng >= 70) printf("just soso\n");
	else printf("You need effort!");
	
	
	return 0;

}