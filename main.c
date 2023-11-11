#include "ft_printf.h"
#include <stdio.h>

int main() {
    // Test with a null pointer
    int p_null = printf("%p\n", NULL);
    int f_null = ft_printf("%p\n", NULL);
    fprintf(stderr, "Null Pointer: p = %d, f = %d\n", p_null, f_null);

    // Test with a valid pointer
    int data = 42;
    int p_valid = printf("%p\n", &data);
    int f_valid = ft_printf("%p\n", &data);
    fprintf(stderr, "Valid Pointer: p = %d, f = %d\n", p_valid, f_valid);

    // Test with a negative integer
    int p_negative = printf("%p\n", -1);
    int f_negative = ft_printf("%p\n", -1);
    fprintf(stderr, "Negative Integer: p = %d, f = %d\n", p_negative, f_negative);

    // Test with a large positive integer
    unsigned long long large_number = 18446744073709551615ULL; // Maximum unsigned long long value
    int p_large = printf("%p\n", large_number);
    int f_large = ft_printf("%p\n", large_number);
    fprintf(stderr, "Large Positive Integer: p = %d, f = %d\n", p_large, f_large);

    return (0);
}