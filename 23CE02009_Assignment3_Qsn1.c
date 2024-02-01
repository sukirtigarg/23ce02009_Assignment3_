/*Lab Assignment 3
Question No.1
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 26/1/24*/

#include <stdio.h>
int main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    if (i > 0)
    printf("\nThe number is positive.");
    else if (i < 0)
    {
        printf("\nThe number is negative.");
    }
    else
    printf("\nThe number is zero.");
    return 0;
}