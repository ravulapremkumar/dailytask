// Write a function to calculate permutations.
#include <stdio.h>
long permutation(int n, int r);
// long combination(int n, int r);
long factorial(int num);

int main(void)
{
    int n = 5, r = 3,fact;

    printf("Permutation = %ld\n", permutation(n, r));

    return 0; // return 0 to operating system
}

long permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}



long factorial(int num)
{
    long long fact = 1;

    while (num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}