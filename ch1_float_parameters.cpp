#include<stdio.h>
int main() {
	int a=37, b=3; // 정수형 변수
	float fa, fb=9, fc=2, fd, fe; // 실수형 변수 - 7자리까지 정확히 나옴. 그 이상 입력 시 약간의 오차가 발생
	double f; // 실수형 변수 (8 byte) - 15자리까지 정확히 나옴 (float 보다는 double 사용 권장)

	fa = 123455667;
	f = 123455667;

	printf("float fa: %f \n", fa); // 약간의 오차 확인 할 수 있음
	printf("duble f: %lf\n\n", f); // 입력한 값이 나옴을 확인 할 수 있음
								   // double 형은 %lf 또는 %f로 받을 수 있음

	fd = (int)fb / fc; // (int) 캐스트 연산자
						 // 원래 fb/fc 값은 4.5 였으나 (int) 캐스트를 통해 화면에 4.0 출력 

	fe = (float)a / b; // (float) cast 가 정수형 변수 a를 순간 실수로 변환 -> 실수/정수 형태가 됨
					   // 결과 값은 12가 아닌 실수 형태: 12.333

	printf("fe: %0.3f\n\n", fe); // %0.3f: 소수 넷째 자리에서 반올림해서 소수 셋째 자리까지 출력

}