
   /*Program to print the sum of all the even elements and even position elements
in an array*/

#include<stdio.h>
void main()
{
    int num[10],i,sum=0,hum=0;
    printf("Enter 4 numbers(without spaces):\n");
    for(i=0;i<4;i++)                   //Input of numbers into the array
    {
        scanf("%d",&num[i]);

    }

//First part of the program

    printf("The sum of even numbers :");
    for(i=0;i<4;i++)
    {
        if(num[i]%2==0)             //Condition to check for numbers in array which are divisible by 2
        {
            sum=sum+num[i];
        }
            
        
    }
     printf("\n%d",sum);

//Second part of the program

    printf("\nThe sum of  numbers that are at even positions are: \n");
       
    for(i=1;i<4;i=i+2){
        /*i starts from 0 and then i is changed to i+2 that jumps two positions from zero.
            Thus only even positions are alloted to i.*/
            hum=hum+num[i];
    }
    printf("\n%d",hum);
    

}