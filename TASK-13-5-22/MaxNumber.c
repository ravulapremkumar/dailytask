//Write a function to calculate the maximum number in an array. (return the number or its index)
#include<stdio.h>
void max_num(int arr[],int max)
{
  int i;
  for(i=0;i<10;i++)
  {
      if(arr[i]>max)
        max=arr[i];


  }
  printf("%d",max);

}

int main()
{
    int array[10]={20,4,23,2,75,65,92,43,66,13};
    int max=array[0];
    max_num(array,max);
}