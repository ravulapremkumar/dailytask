#include <stdio.h>
void occur_num(int arr[],int res ,int i,int x )
{

     res = 0;
    for (int i=0; i<10; i++){
        if (x == arr[i]){
          res++;
          
        }  
        
    }
    printf("occurence is %d\n",res);
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;
    int res,i;
    occur_num(arr, res,i ,x);
    return 0;
}