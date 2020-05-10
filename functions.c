#include "functions.h"

void problem_1() {

	printf("Namn             : Oscar Olsson\n");
	printf("Födelsedatum     : Oktober 10, 1997\n");
	printf("Mobilnummer      : +46999999999\n");
}

void problem_3() {

	printf("#####\n");
	printf("#\n");
	printf("#\n");
	printf("#####\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");

	printf("\n");

	printf("   ######\n");
	printf(" ##      ##\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf(" ##      ##\n");
	printf("   ######\n");
}

void problem_4() {

	char char1 = 'X';
	char char2 = 'M';
	char char3 = 'L';

	printf("Test Characters: %c, %c, %c\n", char1, char2, char3);
	printf("Expected Output:\n");
	printf("The reverse of %c%c%c is %c%c%c\n", char1, char2, char3, char3, char2, char1);

}

void problem_5() {

	int height = 7;
	int width = 5;

	printf("Perimeter of the rectangle = %d inches\n",(2 * height) + (2 * width));
	printf("Area of the rectangle = %d square inches\n", height * width);
}

void problem_6() {

	float radius = 6.0;

	printf("Perimeter of the Circle = %f inches\n", (2 * M_PI * radius));
	printf("Area of the Circle = %f inches\n", M_PI * pow(radius, 2));

}

void problem_7() {

	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;

	printf("a + c = %d\n", a + b);
	printf("x + c = %f\n", x + c);
	printf("dx + x = %f\n", dx + x);
	printf("dx + ax = %d\n", (int)dx + ax);
	printf("a + x = %f\n", a + x);
	printf("s + b = %d\n", s + b);
	printf("ax + b = %ld\n", ax + b);
	printf("s + c = %hd\n", s + c);
	printf("ax + c = %ld\n", ax + c);
	printf("ax + ux = %lu\n", ax + ux);

}

void problem_8() {

	int days = 1329, weeks = 0, years = 0;

	years = 1329 / 365;
	weeks = (days % 365) / 7;
	days = days - ((years * 365) + (weeks * 7));

	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);

}

void problem_9() {

	int a = 0, b = 0, sum = 0;

	printf("Input the first integer: \n");
	scanf_s("%d", &a);

	printf("Input the second integer: \n");
	scanf_s("%d", &b);

	sum = a + b;

	printf("Sum of the above two integers = %d\n", sum);

}

void problem_10() {

	int a = 0, b = 0, product = 0;

	printf("Input the first integer: \n");
	scanf_s("%d", &a);

	printf("Input the second integer: \n");
	scanf_s("%d", &b);

	product = a * b;

	printf("Sum of the above two integers = %d\n", product);

}

void problem_11(){

	float w_item1 = 0.0, w_item2 = 0.0, nrOf1 = 0.0, nrOf2 = 0.0;

	float avg_value = 0.0;

	printf("Weight - Item 1: ");
	scanf_s("%f", &w_item1);
	printf("No. of item 1: ");
	scanf_s("%f", &nrOf1);

	printf("Weight - Item 2: ");
	scanf_s("%f", &w_item2);
	printf("No. of item 2: ");
	scanf_s("%f", &nrOf2);


	avg_value = ((w_item1 * nrOf1) + (w_item2 * nrOf2)) / (nrOf1 + nrOf2);

	printf("\nAverage Value = %f\n", avg_value);

}

void problem_12() {

	char em_id[10];
	int workingHours = 0;
	float salary = 15000.0;
	float totalSalary = 0.0;

	printf("Input the Employess ID (Max. 10 chars): ");
	scanf_s("%s", em_id, sizeof(em_id));

	printf("\nInput the working hrs: ");
	scanf_s("%d", &workingHours);

	totalSalary = salary * workingHours;

	printf("\nEmployess ID = %s\n", em_id);
	printf("Salary = U$ %.2f\n", totalSalary);

}
