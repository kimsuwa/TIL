#include<stdio.h>
int main() {
	int a, b, date, num, count=0;

	printf("Please enter the number between (0~9) :"); // ��¥�� ���� �ڸ�
	scanf_s("%d",&date);
	printf("Please enter car license plate number seven times(ex.79):"); // �ڵ��� ��ȣ �� ���ڸ�

	for (int i = 1; i <= 7; i++) {  // �ڵ��� 7�� ���� �Է� �ޱ�
		scanf_s("%d",&num);
		if(num%10 == date) count++; // �ڵ��� �� ���ڸ��� ���� �ڸ� ���ϱ�: num%10
	}								// �ڵ��� ���� �ڸ� = ��¥�� ���� �ڸ�
	printf("%d",count);
}