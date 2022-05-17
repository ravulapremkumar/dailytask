//Write a function to calculate the minimum number in an array. (return the number or its index)
#include<stdio.h>
void min_num(int arr[],int max,int min)
{
  int i;
  for(i=0;i<10;i++)
  {
      if(arr[i]>max){
        max=arr[i];
       
      }
      if(arr[i]<min){
        min=arr[i];
        
      }
  }
   printf("Maximum value:%d\n",max);
   printf("Minimum value:%d\n",min);

}

int main()
{
    int array[10]={20,41,23,22,75,65,120,43,66,12};
    int max=array[0];
    int min=array[0];
    min_num(array,max,min);
}