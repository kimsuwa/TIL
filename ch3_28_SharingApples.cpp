#include<stdio.h>
int main() {
	int num, rest=0;
	int student_num, apple_num;

	printf("Enter the number of school:");
	scanf_s("%d",&num);

	for (int i=1; i <= num; i++) {
		printf("student number, apple numer:");
		scanf_s("%d %d", &student_num, &apple_num);
		rest = rest + (apple_num % student_num); // % �̿��ؼ� �� �б��� ��� �����ְ� ���� ���� ����
	}
	printf("%d",rest);
}