#include "main.h"

/**
 * main - prints _putchar
 *
 * description: to write a program that prints _putchar
 *
 * Return: (0) Always success
 *
 */


int main(void)

{

	char text[10] = "Holberton";

	int i = 0;



	for (i = 0; i < 9; i++)

	{

		_putchar(text[i]);

	}

	_putchar('\n');



	return (0);

}
