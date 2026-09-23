#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Prints the last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		msg = "greater than 5";
	else if (last_digit == 0)
		msg = "0";
	else
		msg = "less than 6 and not 0";

	printf("Last digit of %d is %d and is %s\n", n, last_digit, msg);
	return (0);
}
