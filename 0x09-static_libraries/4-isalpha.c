#include "main.h"
 /**
 * _isalpha -The function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int s)
{
return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}

