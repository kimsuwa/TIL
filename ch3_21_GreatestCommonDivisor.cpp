#include<stdio.h>
int main() {
	int i, num1, num2, GCD=0;
	int a, b;

	printf("�� �ڿ����� �Է��Ͻÿ�:");
	scanf_s("%d %d",&num1,&num2);
	//printf("%d %d",num1, num2);
	// �� �ڿ��� ������ ������� ���Ѵ�.
	if (num1 > num2) { // ù ��° �Է� ���� ���� Ŭ ��� 
		for (i = 1; i <= num1; i++) { // �Է� ���� ���� ū ����ŭ for ���� �����ش�.
			a = num1 % i;
			b = num2 % i;
			//printf("\n%d. num1=%d num2=%d a=%d b=%d\n",i, num1, num2, a, b); // ��� �� Ȯ���ϰ��� �� �� ���!
			if (num1 % i == 0 && num2 % i == 0) { // i �� ������ 0�� �Ǹ� ���
				GCD = i; // for ���� ���鼭 i �����ϰ�, ����� �� ���� ū ���� ����Ѵ�.
			}
		}
	}
	else if (num1 < num2) {
		for (i = 1; i <= num2; i++) {
			if (num1 % i == 0 && num2 % i == 0) {
				GCD = i; // for ���� ���鼭 i �����ϰ�, ����� �� ���� ū ���� ����Ѵ�.
			}
		}
	}	
	printf("\n�ִ������� '%d'�̴�",GCD);

	/*
	int a, b, min, i;
	scanf_s("%d %d", &a, &b); //56 ,84 �Է� ��
	if (a < b) min = a;
	else min = b;
	for (i = min; i >= 1; i--) { // i: 56 -> 28 ���� 1 �� ���� 
		if (a % i == 0 && b % i == 0) { // 28�� a�� b ���� �� ��������(������ '0')
			printf("%d\n", i);			// 28(=i) ���	
			break;
		}
	}
	return 0; */
}