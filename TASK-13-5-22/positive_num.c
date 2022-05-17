// Write a function to check if a number is posit// Write a function to count the number of positive numbers in an array.
#include <stdio.h>
int is_pos(int n)
{
    for (int i = 0; i < 10; i++)
    {
        if (n >= 0)
        {
            return 1;
        }
        else
            return 0;
        // printf("positive number is  :%d\n", pos);
    }
}
int main()
{

    int i, n = 10, positive;
    positive = is_pos(n);
    printf("%d", positive);

    return 0;
}