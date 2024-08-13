#include <stdio.h>

int main() 
{
    // Declare variables for the three numbers
    int a, b, c;
    int max, min;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Initialize max and min to the first number
    max = min = a;

    // Determine the maximum
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // Determine the minimum
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    // Output the maximum and minimum numbers
    printf("The maximum number is %d\n", max);
    printf("The minimum number is %d\n", min);
}
