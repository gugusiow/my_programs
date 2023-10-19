#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// This function computes the value of n factorial recursively.
int factorial(int n)
{
    int result;

    if (n == 1) {
        return 1;
    }
    else {
        result = n * factorial(n - 1);
        printf("result is %d and n is %d\n", result, n);
        return result;
    }
}

int main()
{
    int n;

    // Ask for a number
    printf("Please enter a number: ");
    scanf("%d", &n);

    // Print out the value of the factorial of n
    printf("The value of %d! is %d.\n", n, factorial(n)); 
}
