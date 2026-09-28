#include <stdio.h>
#include <stdint.h>

int main() 
{
    uint32_t number = 0;
    uint32_t n;
    int count = 0;

    printf("Enter an unsigned 32-bit integer: ");
    if (scanf("%u", &number) != 1) 
    {
        printf("Invalid input. Please enter an unsigned 32-bit integer.\n");
        return 1;
    }
    n = number;

    while (n != 0) 
    {
        n &= (n - 1);
        count++;
    }

    printf("Number of bits set in %u: %d\n", number, count);

    return 0;
}