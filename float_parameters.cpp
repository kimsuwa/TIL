#include<stdio.h>
int main() {
	int a=37, b=3; // ������ ����
	float fa, fb=9, fc=2, fd, fe; // �Ǽ��� ���� - 7�ڸ����� ��Ȯ�� ����. �� �̻� �Է� �� �ణ�� ������ �߻�
	double f; // �Ǽ��� ���� (8 byte) - 15�ڸ����� ��Ȯ�� ���� (float ���ٴ� double ��� ����)

	fa = 123455667;
	f = 123455667;

	printf("float fa: %f \n", fa); // �ణ�� ���� Ȯ�� �� �� ����
	printf("duble f: %lf\n\n", f); // �Է��� ���� ������ Ȯ�� �� �� ����
								   // double ���� %lf �Ǵ� %f�� ���� �� ����

	fd = (int)fb / fc; // (int) ĳ��Ʈ ������
						 // ���� fb/fc ���� 4.5 ������ (int) ĳ��Ʈ�� ���� ȭ�鿡 4.0 ��� 

	fe = (float)a / b; // (float) cast �� ������ ���� a�� ���� �Ǽ��� ��ȯ -> �Ǽ�/���� ���°� ��
					   // ��� ���� 12�� �ƴ� �Ǽ� ����: 12.333

	printf("fe: %0.3f\n\n", fe); // %0.3f: �Ҽ� ��° �ڸ����� �ݿø��ؼ� �Ҽ� ��° �ڸ����� ���

}