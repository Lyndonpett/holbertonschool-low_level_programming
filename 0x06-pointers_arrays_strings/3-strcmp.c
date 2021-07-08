/**
 * _strcmp -  compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && (*s1 == *s2); s1++, s2++)
	{}
	return (unsigned char)(*s1) - (unsigned char)(*s2);
}
