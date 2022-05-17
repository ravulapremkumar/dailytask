// Wrtie a function to print the all elements in an array.
#include <stdio.h>
void all_ele(int i, int n, int array[])
{
    for (i = 0; i < 10; i++)
        printf("%d\n", array[i]);
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, n;
    all_ele(i, n, array);
}