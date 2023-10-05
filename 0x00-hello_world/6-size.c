#include <stdio.h>

/**
 * main - prints the size of data types
 * Return: returns zero
 */

int main(void)
{
	char aCharacter;
	int integer;
	long int aLongInteger;
	long long int aLongerInteger;
	float aFloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(aCharacter));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(aLongInteger));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(aLongerInteger));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(aFloat));

	return (0);
}
