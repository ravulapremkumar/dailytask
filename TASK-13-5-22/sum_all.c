// Write a function to calculate the sum of all digits in an integer.
#include <stdio.h>
void sum_all(int array[], int sum, int i)
{
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + array[i];
    }

    printf("%d\n", sum);
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum, m, n, i = 0;
    sum_all(array, sum, i);
}