#include<stdio.h>
// exercise 1
/*
void main() {

	float length, height, area, perimeter;

	printf("Enter the length: ");
	scanf_s("%f", &length);

	printf("Enter the hight: ");
	scanf_s("%f", &height);

	area = length * height;
	perimeter = 2 * (length + height);

	printf("The area is: %.2f\nthe perimeter is: %.2f\n\n", area, perimeter);
}
*/
// exercise 2
/*
void main() {

	int price, amount, discount;
	double total_price;

	printf("Enter the price, the amount and the discount precent: ");
	scanf_s("%d %d %d", &price, &amount, &discount);

	total_price = (price * amount) * (1.0 - discount / 100.00);

	printf("the total price is %.2lf\n\n", total_price);
}
*/
// exercise 3
/*
void main() {
	
	int grade1, grade2, grade3;
	double avarage;

	printf("Enter tree grades: ");
	scanf_s("%d %d %d", &grade1, &grade2, &grade3);

	avarage = (grade1 + grade2 + grade3) / 3.0;

	printf("your final score is: %.2lf\n\n", avarage);
}
*/
// exercise 4
/*
void main() {
	float radius, area, scope;
	printf("Enter a radius: ");
	scanf_s("%f", &radius);

	area = (radius * radius) * 3.14F;
	scope = 2 * radius * 3.14F;

	printf("the area of the circle is %.2f\n", area);
	printf("the scope of the circle is %.2f\n\n", scope);
}
*/
// exercise 5
/*
void main() {
	int hour, minute, sum;

	printf("Enter the hour and the minute: ");
	scanf_s("%d %d", &hour, &minute);

	sum = (hour * 60) + minute;
	printf("the sum of minutes is: '%d'", sum);
}
*/
// exercise 6
/*
void main() {
	int grade1, grade2, grade3;
	float avarge;
	char massage[1];

	printf("Enter tree last grades: ");
	scanf_s("%d %d %d", &grade1, &grade2, &grade3);

	avarge = (grade1 + grade2 + grade3) / 3.f;
	if (avarge >= 90){
		char massage[] = "you are excellent!!\n\n";
	}
	else if (avarge < 50){
		char massage[] = "You need to improve your grades!\n\n";
	}
	else {
		char massage[] = "\n\n";
	}

	printf("your final score is '%.2f' %s", avarge, massage);

}
*/
// exercise 7
/*
void main() {
	int sum_of_month;

	printf("Enter the amaunt of a month for your family: ");
	scanf_s("%d", &sum_of_month);

	if (sum_of_month * 12 >= 100000)
		printf("the amaunt of a month for your family is bigger then 100,000\n\n");
	else
		printf("the amaunt of a month for your family is smaller then 100,000\n\n");
}
*/
// exercise 8
/*
void main() {
	float price, amount, total_price;

	printf("Enter a price and the amount: ");
	scanf_s("%f %f", &price, &amount);

	total_price = price * 1.17 * amount;

	if (total_price >= 10000)
		printf("the total_price  is %.2f bigger then 10,000\n\n", total_price);
	else
		printf("the total_price is %.2f smaller then 10,000\n\n", total_price);
}
*/
// exercise 9
/*
void main() {
	int grade1, grade2, grade3;
	float avarge;

	printf("Enter tree last grades: ");
	scanf_s("%d %d %d", &grade1, &grade2, &grade3);

	avarge = (grade1 + grade2 + grade3) / 3.f;

	if ((avarge > 65) && (grade1 != 0) && (grade2 != 0) && (grade3 != 0)) {
		printf("you are pass!!!\n\n");
	}
	else {
		printf("you are fail!!!\n\n");
	}
}
*/
// exercise 10
/*
void main() {
	int age1, age2, age3;

	printf("Enter your tree ages: ");
	scanf_s("%d %d %d", &age1, &age2, &age3);

	if ((age1 >= 18) && (age2 >= 18) && (age3 >= 18)) {
		printf("You can enter the movie !!\n\n");
	}
	else {
		printf("You can't enter the movie !!\n\n");
	}
}
*/
// exercise 11

void main() {
	int side1, side2, side3;

	printf("Enter your tree sides of a triangle: ");
	scanf_s("%d %d %d", &side1, &side2, &side3);

	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
		printf("The triangle is legal !!\n\n");
	}
	else {
		printf("The triangle is illegal !!\n\n");
	}
}

// exercise 12


