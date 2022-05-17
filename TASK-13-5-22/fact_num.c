#include <stdio.h>
void fact_num(int i, int fact,int n)
{
    fact=1;
    for (i = 1; i <=n; i++)
    {
        fact= fact * i;
        
    }
    printf("factroial of number is %d\n ", fact);
}
int main()
{
    
    int i, fact,n=5;
    fact_num(i, fact,n);
}