#include "main.h"

/**
 * _print - moves a string one place to the left
 * and prints the string.
 * @str: string to move
 * @l: size of string
 * Return: void
 */

void _print(char *str, int l)
{
	int i, o;

	i = o = 0;
	while (i < l)
	{
		if (str[i] != '0')
			o = 1;
		if (o || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string
 * and places the answer into dest.
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 * Return: pointer to dest, or NULL on failure
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int a, b, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (a = num_index, b = dest_index; a >= o; a--, b--)
	{
		mul = (n - '0') * (num[a] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[b] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; b >= 0 && addrem; b--)
	{
		add = (dest[b] - '0') + addrem;
		addrem = add / 10;
		dest[b] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments,
 * to ensure they are digits.
 * @av: pointer to arguments
 * Return: 0 if digits, 1 if otherwise
 */

int check_for_digits(char **av)
{
	int d, e;

	for (d = 1; d < 3; d++)
	{
		for (e = 0; av[d][e]; e++)
		{
			if (av[d][e] < '0' || av[d][e] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 * Return: void
 */

void init(char *str, int l)
{
	int c;

	for (c = 0; c < l; c++)
		str[c] = '0';
	str[i] = '\0'
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, tc, c;
	char *b;
	char *f;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (tc = 0; e[tc]; tc++)
			_putchar(e[tc]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	b = malloc(ln * sizeof(char));
	if (b == NULL)
	{
		for (tc = 0; e[tc]; tc++)
			_putchar(e[ti]);
		exit(98);
	}
	init(b, ln - 1);
	for (tc = l2 - 1, c = 0; tc >= 0; tc--, c++)
	{
		t = mul(argv[2][tc], argv[1], l1 - 1, c, (ln - 2) - c);
		if (t == NULL)
		{
			for (tc = 0; e[tc]; tc++)
				_putchar(e[tc]);
			free(b);
			exit(98);
		}
	}
	_print(c, ln - 1);
	return (0);
}
