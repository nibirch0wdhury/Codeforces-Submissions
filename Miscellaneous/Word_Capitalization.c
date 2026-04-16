#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char c[1000];
    scanf("%s", c);
    
    int n = strlen(c);
    printf("%c", toupper(c[0]));
    for(int i = 1; i < n; i++)
    {
        printf("%c", c[i]);
    }

    
}

