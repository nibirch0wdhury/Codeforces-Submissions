#include <stdio.h>

int main()
{
    int t, n, a, b, x, y;
    scanf("%d", &t);
    int result[t];
    for(int i = 0; i < t; i++)
    {
       scanf("%d", &n);
       scanf("%d", &a);
       scanf("%d", &b);
       x = 0;
       y = 0;

       char s[n];
       scanf("%c", s);
       for(int j = 0; j < n; j++)
       {
            if(s[j] == 'N')
                y++;
            else if(s[j] == 'E')
                x++;
            else if(s[j] == 'S')
                y--;
            else if(s[j] == 'W')
                x--;
       }
        if(a == x && b == y)
            result[i] = 1;
        else
            result[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {

        if(result[i] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
