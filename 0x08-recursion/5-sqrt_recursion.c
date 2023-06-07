#include "main.h"
/**
 * _sqrt_recursion - returns natural sqrt
 * @n: number to calc sqrt of
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;  // Error: Invalid input
    } else if (n == 0 || n == 1) {
        return n;  // Base case: square root of 0 or 1 is the number itself
    } else {
        return sqrt_helper(n, 1, n);  // Helper function for finding the square root
    }
}

int sqrt_helper(int n, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (mid * mid == n) {
        return mid;  // Base case: square root found
    } else if (mid * mid > n) {
        return sqrt_helper(n, start, mid - 1);  // Search in the lower half
    } else {
        return sqrt_helper(n, mid + 1, end);  // Search in the upper half
    }
}
