#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int total_length = 0;
    int i, j, k;

    char *concatenated;

    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; /* Account for the newline character */
    }

    /* Allocate memory for the concatenated string */
    concatenated = (char *)malloc(sizeof(char) * (total_length + 1));
    if (concatenated == NULL)
        return NULL;

    k = 0;

    /* Copy the arguments to the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concatenated[k] = av[i][j];
            k++;
        }
        concatenated[k] = '\n'; /* Add the newline character */
        k++;
    }
    concatenated[k] = '\0'; /* Add the null terminator */

    return concatenated;
}
