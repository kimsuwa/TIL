#include<stdio.h>
int main() {
	char str; //1byte (8bit) 변수 A~Z ASCII code는 65~90 , a~z 97~122 임! 암기!!
			  // %d로 찍으면 ASCII 코드 출력 및 연산시에도 ASCII 코드 사용 함. int 형으로 볼 수 있음
			  // %c로 찍으면 문자 출력
	str = 'A';
	printf("%c\n", str); // A 출력
	printf("%d\n", str); // 65 출력
	str = str + 1;
	printf("%c\n", str); //B 출력
	printf("%d\n", str); //66 출력
	return 0;
}