#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if(number == 0)
    {
        printf("%d is zero.\n", number);
    }
    else if(number < 0) 
    {
        printf("%d is negative.\n", number);
    }
    else if(number > 0)
    {
        printf("%d is positive.\n", number);
    }
    int abs_number = abs(number);
    printf("Absolute value: %d\n", abs_number);

    return 0;
}