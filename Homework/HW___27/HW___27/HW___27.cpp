#include <stdio.h>


//exercise 27


//exercise 28
/*
void find_dividers(int num) {
	int i;

	for (i = 1; i < num +1; i++){
		if (num % i == 0) {
			printf("%d ", i);
		}
	}
}
void main() {
	int num;
	printf("Enter a num to find dividers: ");
	scanf_s("%d", &num);

	find_dividers(num);

	printf("\n\n");
}
*/

//exercise 29
/*
void prime_number(int num) {
	int i;
	bool prime = true;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0){
			prime = false;
			break;
		}

	}
	if (prime == false){
		printf("%d is not a prime_number!", num);
	}
	else{
		printf("%d is a prime_number!!!", num);
	}
}
void main() {
	int num;
	printf("Enter a number to check: ");
	scanf_s("%d", &num);

	prime_number(num);
}
*/
