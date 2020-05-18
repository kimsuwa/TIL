#include<stdio.h>
int main() {
	int Total_Animal_Num, Total_Leg_Num;
	int rabbit_num=0, hen_num=0;

	printf("Please Enter the total number of rabbits and hens:");
	scanf_s("%d", &Total_Animal_Num);
	printf("\nPlease Enter the total leg number of rabbits and hens:");
	scanf_s("%d", &Total_Leg_Num);

	//rabbit_num = -Total_Animal_Num + 0.5 * Total_Leg_Num;
	//hen_num = 2*Total_Animal_Num - 0.5 * Total_Leg_Num;

	for (int i = 1; i <= Total_Animal_Num; i++) {
		for (int j = 1; j <= Total_Animal_Num; j++) {
			if ((i + j) == Total_Animal_Num && (4*i+2*j) == Total_Leg_Num) {
				rabbit_num = i;
				hen_num = j;
			}
		}
	}

	printf("\n%d %d", rabbit_num, hen_num);

	/* Answer
	int a, b, i, tmp;
	scanf_s("%d %d", &a, &b);		// 'a' is total number of animals 
									// 'b' is total number of hen
	for (i = 1; i < a; i++) {		// 'i' is the number of rabbit 
		tmp = 4 * i + 2 * (a - i);	// 'a-i' is total number of hen 
		if (tmp == b) {				// 'tmp' is estimated total leg number 
			printf("%d %d", i, a-i);
			break;
		}
	}*/
}