#include "main.h"
/**
 * _sqrt_recursion - returns natural sqrt
 * @n: number to calc sqrt of
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return sqrt_helper(n, 1, n);
    }
}

int sqrt_helper(int n, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (mid * mid == n) {
        return mid;
    } else if (mid * mid > n) {
        return sqrt_helper(n, start, mid - 1);
    } else {
        return sqrt_helper(n, mid + 1, end);
    }
}
