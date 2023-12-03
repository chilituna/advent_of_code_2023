#include "advent.h"

int	ft_1(char **arr)
{
	int	result;
	int a;
	int b;
	int	i;
	int	j;


	result = 0;	
	i = 0;
	while (arr[i])
	{
		a = 0;
		b = 0;
		j = 0;
		while (arr[i][j])
		{
			if (j + 3 < (int)(ft_strlen(arr[i])))
			{
				if (ft_strncmp(arr[i] + j, "one", 3) == 0)
				{
					a = 1;
					break;
				}
				if (ft_strncmp(arr[i] + j, "two", 3) == 0)
				{
					a = 2;
					break;
				}
				if (ft_strncmp(arr[i] + j, "six", 3) == 0)
				{
					a = 6;
					break;
				}
			}
			if (j + 4 < (int)(ft_strlen(arr[i])))
			{
				if (ft_strncmp(arr[i] + j, "four", 4) == 0)
				{
					a = 4;
					break;
				}
				if (ft_strncmp(arr[i] + j, "nine", 4) == 0)
				{
					a = 9;
					break;
				}
				if (ft_strncmp(arr[i] + j, "five", 4) == 0)
				{
					a = 5;
					break;
				}
			}
			if (j + 5 < (int)(ft_strlen(arr[i])))
			{
				if (ft_strncmp(arr[i] + j, "three", 5) == 0)
				{
					a = 3;
					break;
				}
				if (ft_strncmp(arr[i] + j, "seven", 5) == 0)
				{
					a = 7;
					break;
				}
				if (ft_strncmp(arr[i] + j, "eight", 5) == 0)
				{
					a = 8;
					break;
				}
			}
			if (ft_isdigit(arr[i][j]) == 1)
			{
				a = arr[i][j] - '0';
				break;
			}
			j++;
		}
		while (arr[i][j])
			j++;
		j--;
		while (j >= 0)
		{
			if (j - 2 >= 0)
			{
				if (ft_strncmp(arr[i] + j - 2, "one", 3) == 0)
				{
					b = 1;
					break;
				}
				if (ft_strncmp(arr[i] + j - 2, "two", 3) == 0)
				{
					b = 2;
					break;
				}
				if (ft_strncmp(arr[i] + j - 2, "six", 3) == 0)
				{
					b = 6;
					break;
				}
			}
			if (j - 3 >= 0)
			{
				if (ft_strncmp(arr[i] + j - 3, "nine", 4) == 0)
				{
					b = 3;
					break;
				}
				if (ft_strncmp(arr[i] + j - 3, "four", 4) == 0)
				{
					b = 4;
					break;
				}
				if (ft_strncmp(arr[i] + j - 3, "five", 4) == 0)
				{
					b = 5;
					break;
				}
			}
			if (j - 4 >= 0)
			{
				if (ft_strncmp(arr[i] + j - 4, "three", 5) == 0)
				{
					b = 3;
					break;
				}
				if (ft_strncmp(arr[i] + j - 4, "seven", 5) == 0)
				{
					b = 7;
					break;
				}
				if (ft_strncmp(arr[i] + j - 4, "eight", 5) == 0)
				{
					b = 8;
					break;
				}
			}	
			if (ft_isdigit(arr[i][j]) == 1)
			{
				b = arr[i][j] - '0';
				break;
			}
			j--;
		}
		result = result + (10 * a + b);
		i++;
	}
	return (result);
}