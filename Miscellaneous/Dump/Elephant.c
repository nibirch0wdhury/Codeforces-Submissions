#include <stdio.h>
int main(void)
{
    int n;
    scanf("%i", &n);
    if(n % 5 == 0)
    {
        printf("%i", n / 5);
    }
    else
    {
        int m = n /5;
        printf("%i", m + 1);
    }
}