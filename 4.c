#include "advent.h"
#include <math.h>

// compare winning numbers to player tickets of each row
int ft_compare(int **winners, int **tickets)
{
    int i;
    int j;
    int k;
    int result;
    int total;

    i = 0;
    total = 0;
    while (i < 218)
    {
        j = 0;
        result = 0;
        while (j < 10)
        {
            k = 0;
            while (k < 25)
            {
                if (winners[i][j] == tickets[i][k])
                    result++;
                k++;
            }
            j++;
        }
       if (result >= 1)
            total = total + pow(2, result - 1);
        i++;
    }
    ft_free_int(winners);
    ft_free_int(tickets);
    return (total);
}


// winning numers: parse to an array of 218 10 ints
// player tickets: parse to an array of 218 arrays of 25 ints
int ft_4(char **arr)
{
    int **winners;
    int **tickets;
    int i;
    int j;
    int k;
   
    winners = (int **)malloc(sizeof(int *) * 219);
    if (!winners)
        return (1);
    tickets = (int **)malloc(sizeof(int *) * 219);
    if (!tickets)
        return (1);
    for (i = 0; i < 218; i++)
    {
        winners[i] = (int *)malloc(sizeof(int) * (10 + 1));
        tickets[i] = (int *)malloc(sizeof(int) * (25 + 1));
    }
    i = 0;
    while (arr[i])
    {
        j = 0;
        k = 0;
        while (arr[i][j] != ':')
            j++;
        while (arr[i][j] != '|')
        {
            if (ft_isdigit(arr[i][j]))
            {
                if (ft_isdigit(arr[i][j + 1]))
                {
                    winners[i][k] = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
                    j += 2;
                }
                else
                {
                    winners[i][k] = arr[i][j] - '0';
                    j++;
                }
                k++;
            }
            else
                j++;
        }
        winners[i][k] = '\0';
        i++;
    }
    winners[i] = NULL;
    i = 0;
    while (arr[i])
    {
        int j = 0;
        int k = 0;
        while (arr[i][j] != '|')
            j++;
        while (arr[i][j] != '\0')
        {
            if (ft_isdigit(arr[i][j]))
            {
                if (ft_isdigit(arr[i][j + 1]))
                {
                    tickets[i][k] = (arr[i][j] - '0') * 10 + (arr[i][j + 1] - '0');
                    j += 2;
                }
                else
                {
                    tickets[i][k] = arr[i][j] - '0';
                    j++;
                }
                k++;
            }
            else
                j++;
        }
        tickets[i][k] = '\0';
        i++;
    }
    tickets[i] = NULL;
    return (ft_compare(winners, tickets));
}
