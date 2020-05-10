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