  
 /* Write a program to print given patterns using loops :
        *       *
          *   *
            *
          *   *
        *       *
 */
 //We can imagine this pattern to be the elements on both diagonals in a 2d array
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(i==j)                //Elements on main diagonal
            printf("*");
            else if(i+j==6)         //Elements on side diagonal
            printf("*");
            else
            printf(" ");            //Elements other than the diagonals are spaces
        }
        printf("\n");               //After each line there is a line break
    }
}