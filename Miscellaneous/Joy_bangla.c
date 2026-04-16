#include <stdio.h>
int main()
{
    int t, n, count = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        count = count + n;
    }
    for(int i = 0; i < count; i++)
    {
        printf("Joy Bangla\n");
    }
}
