#include<stdio.h>
#include <math.h>
int main() {
	int i, j;

	while (1) {
		printf("\n\n50 이하의 자연수를 입력하시오(소수 판별):");
		scanf_s("%d", &j);

		// 소수 조건: 2 <= n <= root(j) 인 n으로 입력받은 수 j 를 나누었을 때 나누어 떨어지면 안됨
		double n = sqrt(j); //  2 <= n <= root(j) 
		//int num = floor(n); // n의 값이 3.xx 소수 출력 시 3으로 내림을 사용하여 for 문 횟수 결정하는 것 // 이 방법으로 하는 것 추천 실수 없이 할 수 있음

		if (j == 1) printf("소수도 합성수도 아님\n");
		else if (j == 2 || j == 3) printf("소수 YES\n");
		else if (j >= 4) { // '='을 빼버리면 4 입력 시 연산 안 됨. 꼭 '=' 표기 할 것

			for (i = 2; i <= n; i++) { //(int) n 안 해줘도 동작하지만 데이터 손실 발생할 수 있음

				if ((j % i) == 0) {
					printf("소수 NO\n");
					i = (int)n; // (int) n 안 해줘도 동작하지만 데이터 손실 발생할 수 있음
				}
				else if ((j % i) != 0) { // 15와 같은 숫자가 입력되어도 15 % 2 의 나머지는 '0'이 아님
										 // i가 n 이 될 때까지 for문 실행하기 위해 i == n 이라는 조건을 더 걸어준다.
					if (i == (int)n) { // 에러 발생!!! n 이 실수 형이어서 정수형인 i 와 같지 않아 같게 해주려면 cast 연산해줘야 함!
						printf("소수 YES\n");
					}
				}

			}
		}
	}

}