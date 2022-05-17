// Write a function to count the number of even numbers in an array.
#include <stdio.h>
void even_num(int n, int array[], int i)
{
    for (i = 0; i < 10; i++)
    {
        // check the condition for even number
        if (array[i] % 2 == 0)
        {
            printf("%d \n", array[i]);
        }
    }
}
int main()
{
    // initializing the array variable
    int array[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n, i;
    // fuction calling
    even_num(n, array, i);
    return 0;
}