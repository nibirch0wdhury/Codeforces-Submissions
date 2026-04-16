#include <stdio.h>

int main()
{
    int a, b, n = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        n++;
    }
    printf("%d", n);
}