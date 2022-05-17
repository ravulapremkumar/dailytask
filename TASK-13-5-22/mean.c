#include <stdio.h>
void mean_num(int arr[], int i, int sum, int mean)
{

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum is :%d\n", sum);
    mean = sum / 5;
    printf("Mean is:%d", mean);
}
int main()
{
    int arr[5] = {3, 4, 6, 8, 6};
    int sum = 0, i, mean;
    mean_num(arr, i, sum, mean);
}