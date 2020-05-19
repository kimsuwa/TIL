#include<stdio.h>
int main() {
	int a, b, date, num, count=0;

	printf("Please enter the number between (0~9) :"); // 날짜의 일의 자리
	scanf_s("%d",&date);
	printf("Please enter car license plate number seven times(ex.79):"); // 자동차 번호 끝 두자리

	for (int i = 1; i <= 7; i++) {  // 자동차 7대 정보 입력 받기
		scanf_s("%d",&num);
		if(num%10 == date) count++; // 자동차 끝 두자리의 일의 자리 구하기: num%10
	}								// 자동차 끝의 자리 = 날짜의 일의 자리
	printf("%d",count);
}