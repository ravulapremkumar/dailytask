// Write a function to check if a number is even. (return true or false) bool is_odd(int number)
#include <stdio.h>
int is_even(int n)
{
    for (int i = 0; i < n; i++)
    {
        // check the condition for even number
        if (n % 2 == 0)
        {
            return 1;
        }
        else
            return 0;
    }
}
int main()
{

     int n = 6,even;
    // fuction calling
    even=is_even(n);
    printf("%d",even);

}