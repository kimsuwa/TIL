#include<stdio.h>
int main() {
	char str; //1byte (8bit) ���� A~Z ASCII code�� 65~90 , a~z 97~122 ��! �ϱ�!!
			  // %d�� ������ ASCII �ڵ� ��� �� ����ÿ��� ASCII �ڵ� ��� ��. int ������ �� �� ����
			  // %c�� ������ ���� ���
	str = 'A';
	printf("%c\n", str); // A ���
	printf("%d\n", str); // 65 ���
	str = str + 1;
	printf("%c\n", str); //B ���
	printf("%d\n", str); //66 ���
	return 0;
}