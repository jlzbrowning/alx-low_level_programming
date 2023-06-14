#include "main.h"
#include <stdlib.h>
#include <string.h>

int is_separator(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i, j, word_count = 0;
    int len = strlen(str);
    int in_word = 0;

    // Count the number of words in the string
    for (i = 0; i < len; i++)
    {
        if (is_separator(str[i]))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            word_count++;
        }
    }

    // Allocate memory for the array of words
    char **words = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return NULL;

    i = 0;
    j = 0;
    in_word = 0;

    // Split the string into words
    for (i = 0; i < len; i++)
    {
        if (is_separator(str[i]))
        {
            if (in_word)
            {
                words[j][in_word] = '\0';
                j++;
                in_word = 0;
            }
        }
        else
        {
            if (!in_word)
            {
                int word_len = 1;
                int k;

                // Calculate the length of the current word
                for (k = i + 1; k < len && !is_separator(str[k]); k++)
                    word_len++;

                // Allocate memory for the word
                words[j] = (char *)malloc(sizeof(char) * (word_len + 1));
                if (words[j] == NULL)
                {
                    // Free previously allocated memory on failure
                    for (k = 0; k < j; k++)
                        free(words[k]);
                    free(words);
                    return NULL;
                }

                in_word = 1;
            }

            words[j][in_word - 1] = str[i];
            in_word++;
        }
    }

    if (in_word)
        words[j][in_word - 1] = '\0';

    words[word_count] = NULL;

    return words;
}
