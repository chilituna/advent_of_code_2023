#include "advent.h"

int	main(int argc, char **argv)
{
	int		file;
	char	**arr;
	int		i;
	int		result;
	int		linenmbr;

	result = 0;
	if (argc != 2)
	{
		printf("Error: Wrong number of arguments\n");
		return (1);
	}
	if (argv[1][0] == '1' && argv[1][1] == '\0')
	{
		file = open("1.txt", O_RDONLY);
		if (file == -1)
			return (1);
		linenmbr = 1000;
	}
	else if (argv[1][0] == '2' && argv[1][1] == '\0')
	{
		file = open("2.txt", O_RDONLY);
			if (file == -1)
			return (1);
		linenmbr = 100;
	}
	i = 0;
	arr = malloc(sizeof(char *) * (linenmbr + 1));
	while (i < linenmbr)
	{
		arr[i] = get_next_line(file);
		if (!arr[i])
			return (1);
		i++;
	}
	arr[i] = NULL;
	if (argv[1][0] == '1' && argv[1][1] == '\0')
		result = ft_1(arr);
	else if (argv[1][0] == '2' && argv[1][1] == '\0')
		result = ft_2(arr);
	ft_freeall(arr);
	close(file);
	printf("Result= %d\n", result);
	return (0);
}