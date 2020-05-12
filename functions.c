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
	double x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;

	printf("a + c = %d\n", a + b);
	printf("x + c = %lf\n", x + c);
	printf("dx + x = %f\n", dx + x);
	printf("dx + ax = %d\n", (int)dx + ax);
	printf("a + x = %lf\n", a + x);
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

void problem_13() {

	int a = 0,
		b = 0,
		c = 0;
	int highest = 0;

	printf("Input the first integer: ");
	scanf_s("%d", &a);
	printf("\ninput the second integer: ");
	scanf_s("%d", &b);
	printf("\nInput the third integer: ");
	scanf_s("%d", &c);

	if (a > b) {
		highest = a;
	}
	else if (b > c) {
		highest = b;
	}
	else
		highest = c;

	printf("\nMaximum value of three integers: %d\n", highest);

}

void problem_14() {

	int totalDistance = 0;
	double spentFuel = 0.0;
	double avgConsumption = 0.0;

	printf("Input total distance in km: ");
	scanf_s("%d", &totalDistance);
	printf("\nInput total fuel spent in liters: ");
	scanf_s("%lf", &spentFuel);

	avgConsumption = totalDistance / spentFuel;

	printf("\nAverage consumption (km/lt): %.3lf", avgConsumption);

}

void problem_15() {

	int x1 = 0,
		y1 = 0,
		x2 = 0,
		y2 = 0,
		length = 0,
		height = 0;
	double distance = 0.0;

	printf("Input x1: ");
	scanf_s("%d", &x1);
	printf("\nInput y1: ");
	scanf_s("%d", &y1);
	printf("\nInput x2: ");
	scanf_s("%d", &x2);
	printf("\nInput y2: ");
	scanf_s("%d", &y2);

	length = x2 - x1;
	height = y2 - y1;

	distance = sqrt(pow(length, 2) + pow(height, 2));

	printf("\nDistance between the said points: %.4lf\n", distance);

}

void problem_16() {

	int amountLeft = 0,
		total = 0;

	printf("Input the amount: ");
	scanf_s("%d", &amountLeft);

	total = amountLeft / 100;

	printf("\nThere are:\n");
	printf("%d Note(s) of 100.00", total);

	amountLeft = amountLeft - (total * 100);
	total = amountLeft / 50;

	printf("\n%d Note(s) of 50.00", total);

	amountLeft = amountLeft - (total * 50);
	total = amountLeft / 20;

	printf("\n%d Note(s) of 20.00", total);

	amountLeft = amountLeft - (total * 20);
	total = amountLeft / 10;

	printf("\n%d Note(s) of 10.00", total);

	amountLeft = amountLeft - (total * 10);
	total = amountLeft / 5;

	printf("\n%d Note(s) of 5.00", total);

	amountLeft = amountLeft - (total * 5);
	total = amountLeft / 2;

	printf("\n%d Note(s) of 2.00", total);

	amountLeft = amountLeft - (total * 2);
	total = amountLeft;

	printf("\n%d Note(s) of 1.00", total);

}

void problem_17() {

	int sec = 0,
		sec_2 = 0,
		min = 0,
		hr = 0;

	printf("Input seconds: ");
	scanf_s("%d", &sec);

	hr = sec / 3600;
	min = (sec - (3600 * hr)) / 60;
	sec_2 = (sec - (3600 * hr) - (min * 60));

	printf("\nH:M:S - %d:%d:%d\n", hr, min, sec_2);

}

void problem_18() {

	int days = 0,
		year = 0,
		month = 0,
		days_2 = 0;

	printf("Input no. of days: ");
	scanf_s("%d", &days);

	year = days / 365;
	month = (days - (year * 365)) / 30;
	days_2 = days - ((year * 365) + (month * 30));

	printf("\n%d Year(s)", year);
	printf("\n%d Month(s)", month);
	printf("\n%d Day(s)", days_2);

}

void problem_19() {

	int p = 0,
		q = 0,
		r = 0,
		s = 0;

	printf("Input the first integer: ");
	scanf_s("%d", &p);

	printf("\nInput the second integer: ");
	scanf_s("%d", &q);

	printf("\nInput the third integer: ");
	scanf_s("%d", &r);

	printf("\nInput the fourth integer: ");
	scanf_s("%d", &s);

	if (q > r && s > p) {

		if ((r + s) > (q + p)) {
			printf("\nCorrect values...");
		}
		else
			printf("\nWrong values...");
	}
	else
		printf("\nWrong values...");
}

void problem_20() {



}