#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    scanf("%s", &s);
    int l = strlen(s);
    char *p = &s[l - 1];

    for (int i = 0; i < l; i++)
    {
        printf("%c", *(p - i));
    }
    return 0;
}