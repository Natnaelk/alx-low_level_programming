#include "main.h"
int length(char *a)
{
	int len = 0;

	if (*a != '\0')
	{
		len += length(a + 1) + 1;
	}
	return (len);
}
int palindrome(char *s,int start, int end, int middle)
{
	if ((s[start] == s[end] && middle != 0) || (s[start] == s[end + 1] && middle == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
		return palindrome(s, start + 1, end - 1, middle)
}
int is_palindrome(char *s)
{
	int len;

	len = length(s);
	return palindrome(s, 0, length - 1, length % 2);
}
