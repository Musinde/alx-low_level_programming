#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @z: The input character to check
 * Return: int.
 */

int _islower(int z)
{
	if (z >= 97 && z <= 122)
		return (1);
	else
		return (0);
}
