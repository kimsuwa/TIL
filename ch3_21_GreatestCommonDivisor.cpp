#include<stdio.h>
int main() {
	int i, num1, num2, GCD=0;
	int a, b;

	printf("두 자연수를 입력하시오:");
	scanf_s("%d %d",&num1,&num2);
	//printf("%d %d",num1, num2);
	// 두 자연수 각각의 공약수를 구한다.
	if (num1 > num2) { // 첫 번째 입력 받은 수가 클 경우 
		for (i = 1; i <= num1; i++) { // 입력 받은 수가 큰 수만큼 for 문을 돌려준다.
			a = num1 % i;
			b = num2 % i;
			//printf("\n%d. num1=%d num2=%d a=%d b=%d\n",i, num1, num2, a, b); // 출력 값 확인하고자 할 때 사용!
			if (num1 % i == 0 && num2 % i == 0) { // i 로 나누어 0이 되면 약수
				GCD = i; // for 문이 돌면서 i 증가하고, 공약수 중 가장 큰 수를 출력한다.
			}
		}
	}
	else if (num1 < num2) {
		for (i = 1; i <= num2; i++) {
			if (num1 % i == 0 && num2 % i == 0) {
				GCD = i; // for 문이 돌면서 i 증가하고, 공약수 중 가장 큰 수를 출력한다.
			}
		}
	}	
	printf("\n최대공약수는 '%d'이다",GCD);

	/*
	int a, b, min, i;
	scanf_s("%d %d", &a, &b); //56 ,84 입력 시
	if (a < b) min = a;
	else min = b;
	for (i = min; i >= 1; i--) { // i: 56 -> 28 까지 1 씩 감소 
		if (a % i == 0 && b % i == 0) { // 28로 a와 b 나눌 시 나누어짐(나머지 '0')
			printf("%d\n", i);			// 28(=i) 출력	
			break;
		}
	}
	return 0; */
}