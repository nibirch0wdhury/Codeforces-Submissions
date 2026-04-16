#include <stdio.h>

int main(void)
{
    int cost, k, n, w, ans;
    scanf("%i%i%i", &k, &n, &w);
    cost = 0;
    for(int i = 1; i <= w; i++)
    {
        cost = cost + k * i;
    }
    if(cost > n)
    {
    printf("%i", cost - n);
    }
    else
    {
        printf("0");
    }
}