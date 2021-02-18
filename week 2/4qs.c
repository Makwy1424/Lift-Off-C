//Program to find largest and smallest element in an array

#include<stdio.h>
void main()
{
    int size , num[50];
    int i;
    printf("Enter the size of the array:");         //input of size of array
    scanf("%d",&size);
    printf("\nEnter the numbers of the array");
    for(i=0;i<size;i++)                             //Input of numbers into the array
    {
        scanf("%u",&num[i]);
    }

    int min=num[0], max=num[0];             //max and min are assigned to first element of the array.
    for(i=0;i<size;i++)
    {
            if(num[i]<min)
                min=num[i];
            if(num[i]>max)
                max=num[i];
    }
    printf("\nThe largest number =%u",max);
    printf("\nThe smallest number =%u",min);
}