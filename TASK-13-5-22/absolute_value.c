#include <stdio.h>

// Function to find the absolute value
void findAbsolute(int n) // If the number is less than
{                        // zero, then multiply by (-1)
    if (n < 0)
    {
        n = (-1) * n;
    }

    {
        // Print the absolute value
        printf("%d ", n);
    }
}
// Driver Code
int main()
{

    // Given integer
    int n = -12;

    // Function call
    findAbsolute(n);
    return 0;
}
