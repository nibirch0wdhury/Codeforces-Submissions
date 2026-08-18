#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch[100];
    int up = 0, lo = 0;
    scanf("%s", ch);
    int len = strlen(ch);

    for (int i = 0; i < len; i++)
    {
        if(isupper(ch[i]))
            up++;
        else if(islower(ch[i]))
            lo++;
    }
    if (up <= lo)
    {
        for(int i = 0; i < len; i++)
        {
            ch[i] = tolower(ch[i]);
        }
    }
    else
    {
        for(int i = 0; i < len; i++)
        {
            ch[i] = toupper(ch[i]);
        }
    }
    printf("%s", ch);
}