#include <stdio.h>
void same_num(int arr[], int i, int val, int size)
{

    for (i = 0; i < size; i++)
    {
        arr[i] = val;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5];
    int size = sizeof arr / sizeof arr[0];
    int i, val = 5;
    same_num(arr, i, val, size);
}