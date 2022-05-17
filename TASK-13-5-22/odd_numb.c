// Write a function to count the number of odd numbers in an array.
#include<stdio.h>
void odd_numb(int n,int array[],int i)
{
    for(i=0;i<20;i++)
    {
         //check the condition for odd number
        if(array[i]%2!=0)
        {
            printf("%d\n",array[i]);
        }
    }
}
int main()
{
    // initializing the array variable
    int array[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i,n;
    // fuction calling
    odd_numb(n,array,i);
}
