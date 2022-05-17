#include <stdio.h>

void findAbsolute(int N)
{

    // If the number is less than
    // zero, then multiply by (-1)
    if (N < 0)
    {
        N = (-1) * N;
    }

    // Print the absolute value
    printf("%d\n ", N);
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
