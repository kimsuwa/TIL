#include<stdio.h>
#include<math.h>
int main() {
	int a;
	double b;

	printf("Please enter the number of students:");
	scanf_s("%d", &a);
	/* There are twelve pencils per dozen. 
	Let's say teacher is sharing one pencil for each student. 
	How many dozen of pencils does teacher have?*/
	
	b = a / 12.0 + 0.99;  // not good. It is possible to get wrong answers.
	a = (int)b;
	printf("You need %d dozen pencils\n", a); // not good.. cannot print the number of studens
	
	// use ceil(b):12.1->13  floor(b):12.9->12  round(b):12.6->13 / 12.3->12 
	/*b =	a / 12.0;
	b = ceil(b); 
	printf("You need %d dozen pencils\n", (int)b); //cast 'b' as (int)*/

}