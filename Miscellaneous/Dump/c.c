#include <stdio.h>

int main()
{
    int n, count, sub[26];
    int N, K, X[1000], Y[1000];

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &N);
        scanf("%d", &K);
        count = 0;
        for(int j = 1; j <= N; j++)
        {
            scanf("%d", &X[j]);
            scanf("%d", &Y[j]);

            count = count + (K + 1) / X[j];
        }
        sub[i] = count;
    }

    for(int i = 1; i <= n; i++)
    {
        printf("Case %d: %d\n", i, sub[i]);
    }

    return 0;
}
