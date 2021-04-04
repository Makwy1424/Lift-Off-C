#include <stdio.h>
union book
{
    char author[20];
    char book[20];
} b;
int main()
{
    printf("Enter author's name: ");
    scanf("%s", &b.author);
    printf("The name of author and book is: %s\n", b.author);
    printf("Enter books's name: ");
    scanf("%s", &b.book);
    printf("The name of book is: %s", b.book);

    return 0;
}