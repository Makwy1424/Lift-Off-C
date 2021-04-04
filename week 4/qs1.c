#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d \n%d", &r, &c);
    int m[r][c], n[r][c], f[r][c];
    printf("Enter elements of matrix one: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            scanf("%d", &m[i][j]);
        }
    }

    printf("Enter elements of matrix two: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    int *a, *b;
    a = m;
    b = n;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(*(f + i) + j) = *(*(m + i) + j) + *(*(n + i) + j);
        }
    }
    printf("The sum is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", f[i][j]);
        }
        printf("\n");
    }
    return 0;
}