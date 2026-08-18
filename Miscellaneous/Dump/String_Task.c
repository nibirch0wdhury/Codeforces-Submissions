#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%s", c);
    
    int n = strlen(c);
    for(int i = 0; i < n; i++)
    {
        if(tolower(c[i]) == 'a' || tolower(c[i]) == 'o' || tolower(c[i]) == 'y' || tolower(c[i]) == 'e' || tolower(c[i]) == 'u' || tolower(c[i]) == 'i')
        {
            int k = 0;
        }
        else
            printf(".%c", tolower(c[i]));
    }

    
}