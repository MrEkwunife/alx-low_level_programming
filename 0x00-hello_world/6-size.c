#include <stdio.h>

/**
 * main - prints the size of data types
 * Return: returns zero
 */

int main(void)
{
	char aCharacter;
	int integer;
	long int aLI;
	long long int aLLI;
	float aFloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(aCharacter));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(aLI));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(aLLI));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(aFloat));

	return (0);
}
