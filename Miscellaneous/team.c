#include <stdio.h>

int main()
{
    int n, a, b, c, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a+b+c > 1)
    {
        count++;
    }
    }
    printf("%d", count);
}