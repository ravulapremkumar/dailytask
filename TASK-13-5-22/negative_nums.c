// Write a function to count the number of negative numbers in an array.
#include <stdio.h>
void negative_num(int array[], int i, int n, int negative)
{
    for (i = 0; i < 10; i++)
    {
        if (array[i] < 0)
        {
            negative = array[i];
            printf("negative number is  :%d\n", negative);
            
        }
    }
    
        
    
}
    int main(){
    

        int array[10] = {1, 2, -3, 4, -5, -6, -7, 8, 9, 10};
        int len = sizeof array / sizeof array[0];
        int i, n, negative;
        negative_num(array, i, n, negative);
    
    return 0;
}