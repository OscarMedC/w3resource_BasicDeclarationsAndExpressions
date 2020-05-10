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