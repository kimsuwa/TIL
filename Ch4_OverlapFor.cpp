#include<stdio.h>
#include<math.h>
int main() {
	int num;
	printf("Please enter N to print patterns:");
	scanf_s("%d", &num);
	
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n\n");
	
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j <= num-i; j++) { // j <= num-j 써주면 에러 발생
			printf("@");
		}
		printf("\n");
	}

	printf("\n\n\n");

	for (int i = 1; i <= num; i++) {
		//printf(" ");
		for (int j = 1; j <= i; j++) {
			printf("@");
		}
		printf("\n");
	}

	printf("\n\n\n");

	for (int i = 1; i <= num; i++) {
		for (int k = 1; k <= num-i; k++) {
			printf("0");
		}
		for (int j = 1; j <= i; j++) {
			printf("@");
		}
		printf("\n");
	}

	printf("\n\n\n");

	for (int i = 1; i <= num; i++) {
		if(i <= round(num/2)){
		for (int k = 0; k <= num/2 - i; k++) {
			printf("0");
		}
		for (int j = 1; j <= i; j++) {
			printf("@");
		}
		printf("\n");
		}
		else{
			for (int k = 1; k < i - round(num/2); k++) {
				printf("0");
			}
			for (int j = 0; j <= num - i; j++) {
				printf("@");
			}
			printf("\n");
		}

	}
}