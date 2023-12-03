#include "advent.h"

int ft_2(char **arr)
{
    int	result;
    int blue;
    int red;
    int green;
    int i;
    int j;

    i = 0;
    result = 0;
    while (arr[i])
    {
        j = 0;
        blue = 0;
        red = 0;
        green = 0;
        while (arr[i][j] != ':')
            j++;
        while (arr[i][j])
        {
            if (ft_isdigit(arr[i][j]) == 1 && (arr[i][j + 1]) == ' ')
            {
                if (arr[i][j + 2] == 'b' && arr[i][j] - '0' > blue)
                    blue = arr[i][j] - '0';
                else if (arr[i][j + 2] == 'r' && arr[i][j] - '0' > red)
                    red = arr[i][j] - '0';
                else if (arr[i][j + 2] == 'g' && arr[i][j] - '0' > green)
                    green = arr[i][j] - '0';
            }
            else if (ft_isdigit(arr[i][j]) == 1 && ft_isdigit(arr[i][j + 1]) == 1)
            {
                if (arr[i][j + 3] == 'b' && (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0') > blue)
                    blue = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
                else if (arr[i][j + 3] == 'r' && (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0') > red)
                    red = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
                else if (arr[i][j + 3] == 'g' && (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0') > green)
                    green = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
                j++;
            }
            j++;
        }
        result = result + (blue * red * green);
        i++;
    }
    return (result);
}

// int ft_2(char **arr)
// {
//     int	result;
//     int blue;
//     int red;
//     int green;
//     int i;
//     int j;

//     i = 0;
//     result = 0;
//     while (arr[i])
//     {
//         j = 0;
//         blue = 0;
//         red = 0;
//         green = 0;
//         while (arr[i][j] != ':')
//             j++;
//         while (arr[i][j])
//         {
//             if (ft_isdigit(arr[i][j]) == 1 && (arr[i][j + 1]) == ' ')
//             {
//                 if (arr[i][j + 2] == 'b')
//                     blue = arr[i][j] - '0';
//                 else if (arr[i][j + 2] == 'r')
//                     red = arr[i][j] - '0';
//                 else if (arr[i][j + 2] == 'g')
//                     green = arr[i][j] - '0';
//             }
//             else if (ft_isdigit(arr[i][j]) == 1 && ft_isdigit(arr[i][j + 1]) == 1)
//             {
//                 if (arr[i][j + 3] == 'b')
//                     blue = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
//                 else if (arr[i][j + 3] == 'r')
//                     red = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
//                 else if (arr[i][j + 3] == 'g')
//                     green = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
//                 j++;
//             }
//             j++;
//             if (arr[i][j] == ';')
//             {
//                 if (blue > 14 || red > 12 || green > 13)
//                 {
//                     printf("Game %d is not ok!, result remains %d\n", i + 1, result);
//                     i++;
//                     j = 0;
//                 }
//                 blue = 0;
//                 red = 0;
//                 green = 0;
//             }
//             else if (arr[i][j] == '\0')
//             {
//                 if (blue <= 14 && red <= 12 && green <= 13)
//                 {
//                     result = result + (i + 1);
//                     printf("Game %d is ok! Result is now %d\n", i + 1, result);
//                 }
//             }
//         }
//         i++;
//     }
//     return (result);
// }