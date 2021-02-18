#include<stdio.h>
#include<string.h>          //string header file
void main()
{
    char str[50];
    int num ,i,count=0;
    int len =strlen(str);       //calculating the length of the string

    printf("Enter a sentence:");  //Assuming that the user ends the sentence with/without a full stop and not a space
    scanf("%[^\n]",&str);

    for(i=0;i<sizeof(str);i++)              //sizeof() function calculates the size of the string
    {
        if(str[i]==' ' && str[i+1]!='\t')
             count += 1;
    }
    count=count+1;
    printf("\nThe number of words= %d",count);
}

    /*For example:
    The sentence is 'This is LiftOffC'
    This sentence has two spaces. So number of words = three i.e. two spaces + 1  */
