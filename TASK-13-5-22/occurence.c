#include <stdio.h>
void occur_num(int arr[],int res ,int i,int num)
{

     res = 0;
    for (int i=0; i<10; i++){
        if (num== arr[i]){
          num++;
          
        }  
        
    }
    printf("occurence is %d\n",res);
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int length = sizeof(arr)/sizeof(arr[0]);
    int num = 2;
    int res,i;
    occur_num(arr, res,i ,num);
    return 0;
}
