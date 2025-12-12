#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int input[t];
    for(int i = 0; i < t; i++)
        scanf("%d", &input[i]);
    for(int i = 0; i < t; i++)
        printf("%d\n", input[i] - 1);

}