#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
    unsigned int s1_length = 0, s2_length = 0, i, j;
    char *concatenated;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[s1_length] != '\0')
        s1_length++;
    while (s2[s2_length] != '\0')
        s2_length++;

    concatenated = (char *) malloc(sizeof(char) * (s1_length + s2_length + 1));
    if (concatenated == NULL)
        return NULL; /* Allocation failed */

    for (i = 0; i < s1_length; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < s2_length; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return concatenated;
}
