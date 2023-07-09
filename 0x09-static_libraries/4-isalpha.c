#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to check
 *
 * Return: 1 if c is a letter, or 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
