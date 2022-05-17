#include <stdio.h>
void asc_sort(int a[], int n, int i)
{
    int j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}
int main()
{
    int i;
    int a[] = {12, 13, 16, 18};
    int n = sizeof(a) / sizeof(a[0]);
    asc_sort(a, n, i);
}