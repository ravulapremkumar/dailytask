//Write a function to reverse an array
#include<stdio.h>
#define n 5
void reverse_num(int arr[])
{
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
    
}
int main()
{
    int array[n]={2,5,8,9,1};
    int i,rem,rev;
    reverse_num(array);
}