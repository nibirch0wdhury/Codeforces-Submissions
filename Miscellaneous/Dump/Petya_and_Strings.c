#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char a[100];
    char b[100];

    scanf("%s", a);
    scanf("%s", b);

    for(int i = 0; i < strlen(a); i++)
    {
        a[i] = toupper(a[i]);
    }
    for(int i = 0; i < strlen(b); i++)
    {
        b[i] = toupper(b[i]);
    }

    if(strcmp(a,b) == 0)
        printf("0\n");
    else if(strcmp(a,b) > 0)
        printf("1\n");
    else if(strcmp(a,b) < 0)
        printf("-1\n");
    return 0;
}
