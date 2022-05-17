// Write a function to check if a number is odd. (return true or false) bool is_odd(int number)
#include <stdio.h>
int is_odd(int n)
{
    for (int i = 0; i < n; i++)
    {
        // check the condition for odd  number
        if (n % 2 != 0)
        {
            return 1;
        }
        else
            return 0;
    }
}
int main()
{

     int n = 20,odd;
    // fuction calling
    odd=is_odd(n);
    printf("%d",odd);

}