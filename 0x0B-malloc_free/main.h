#ifndef main_h
#define main_h

/**
 * Desc: Header file containing prototypes for functions in the 0x0B-malloc_free directory
 */

int _putchar(char c );
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s, char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
