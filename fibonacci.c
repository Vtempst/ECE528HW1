#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 1;
    int next;
    int fibonacci_count = 0;
    int N = 0;

    printf("Enter N (2 or greater): ");
    if (scanf("%d", &N) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (N < 2)
    {
        printf("Invalid input. N must be greater than or equal to 2.\n");
        return 1;
    }
    printf("Fibonacci sequence up to %d terms:\n", N);
    while(fibonacci_count < N)
    {
        printf("%d ", num1);

        next = num1 + num2;
        num1 = num2;
        num2 = next;

        fibonacci_count++;
    }
    return 0;
}