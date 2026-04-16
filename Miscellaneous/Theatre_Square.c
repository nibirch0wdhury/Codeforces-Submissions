#include <stdio.h>

int main()
{
    long long int m, n, a, n1, m1;
    scanf("%lld%lld%lld", &m, &n, &a);
    if (m % a != 0)
        m1 = (m/a + 1) * a;
    else
        m1 = m * a;
    if (n % a != 0)
        n1 = (n/a + 1) * a;
    else
        n1 = n * a;

    printf("%lld", (m1*n1)/(a*a));
}