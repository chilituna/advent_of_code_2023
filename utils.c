#include "advent.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] && s2[c] && c < n)
		c++;
	if (c == n)
		return (0);
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}

void    ft_freeall(char **arr)
{
    int	i;

    i = 0;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

void    ft_free_int(int **arr)
{
    int	i;

    i = 0;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}