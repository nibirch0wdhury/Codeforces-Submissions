#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%i %i", &m, &n);
    int board = m * n;
    printf("%i", board / 2);
}