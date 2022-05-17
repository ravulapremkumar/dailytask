// Write a function to count the number of prime numbers in an array.
#include <stdio.h>
void prime_num(int array[], int i, int len)
{

    for (i = 0; i < len; i++)
    {
        int j = 2;
        int p = 1;
        while (j < array[i])
        {
            if (array[i] % j == 0)
            {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1)
        {
            printf("%d ", array[i]);
        }
    }
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof array / sizeof array[0];
    int i;

    prime_num(array, i, len);
}