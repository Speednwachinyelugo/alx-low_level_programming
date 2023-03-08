#include "main.h"

/**
 * set_string - entry point
 * @s: The pointer.
 * @to: The char.
 * Description: function set_string
 * Return: 0
 */

void set_string(char **s, char *to)
{
	char to = 'a';
	char *s = &to;
	set_char_s(s, 'b');
}
