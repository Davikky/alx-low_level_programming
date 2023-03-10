#include "main.h"

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: string provided
  *
  * Return: integer value
  */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check if a string is palindrome
  * @s: string provided
  *
  * Return: integer value
  */

int check_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	if (*s == s[i])
	{
		s++;
		i--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  * @s: string provided
  *
  * Return: the string length
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
