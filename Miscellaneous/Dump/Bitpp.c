#include <stdio.h>
#include <string.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);
    char ch[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", ch[i]);
        if (strcmp (ch[i], "X++") == 0 || strcmp (ch[i], "++X") == 0)
            x++;
        else if (strcmp (ch[i], "X--") == 0 || strcmp (ch[i], "--X") == 0)
            x--;
    }
    printf("%d\n", x);
}
