// Write a function to check if a number is negative. (return true or false)// Write a function to check if a number is posit// Write a function to count the number of positive numbers in an array.
#include <stdio.h>
int is_nega(int n)
{
    for (int i = 0; i < 10; i++)
    {
        if (n <= 0)
        {
            return 1;
        }
        else
            return 0;
        // printf("negativenumSber is  :%d\n", nega);
    }
}
int main()
{

    int i, n = -10, negative;
    negative=is_nega(n);
    printf("%d", negative);

    return 0;
}