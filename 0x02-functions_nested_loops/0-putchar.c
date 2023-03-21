/*
 * File: 1-alphabet.c
 * Auth: J Browning
 */

#include "main.h"

/**
 * printer - prints '_putchar'
 */

int printer(void)

char* str = "_putchar\n";
int i;

for (i = 0; str[i] != '\0'; i++) {
    _putchar(str[i]);
    return (0);
}
