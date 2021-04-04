#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], sub[100];
    int found = 1;
    printf("Enter the string: ");
    scanf("%s", &s);
    printf("Enter the sub-string: ");
    scanf("%s", &sub);
    int l1 = strlen(s);
    int l2 = strlen(sub);
    char smol[l2];
    for (int i = 0; i < l1 - l2; i++)
    {
        for (int j = 0, k = i; j < l2; j++, k++)
            smol[j] = s[k];
        if (!strcmp(smol, sub))
        {
            printf("Yes");
            found = 0;
            break;
        }
    }
    if (found)
        printf("No");
    return 0;
}