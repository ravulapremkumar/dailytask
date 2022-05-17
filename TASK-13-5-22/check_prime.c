// write a function to check if a number is prime. (return true or false) bool is_prime(int number)
#include <stdio.h>
int  bool_is_prime( int m)
{
    int n,flag=0;
    m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return 1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    
}
int main()
{
    int n, i, m = 7, flag = 0,prime;
    prime= bool_is_prime(m);
    printf("%d",prime);
    return 0;
}
