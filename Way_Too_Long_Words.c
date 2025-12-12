#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char input[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", input[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (strlen(input[i]) > 10)
        {
            printf("%c%lu%c\n", input[i][0], strlen(input[i]) - 2, input[i][strlen(input[i]) - 1]);
        }
        else
        {
           printf("%s\n", input[i]);
        }
    }
    return 0;
}
