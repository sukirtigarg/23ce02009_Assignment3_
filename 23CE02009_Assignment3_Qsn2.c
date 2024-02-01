/*Lab Assignment 3
Question No.2
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 26/1/24*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a>=b && a>=c)
    {
        printf("\nGreatest number: %d", a);
    }
    else if (b>=a && b>=c) 
    {
        printf("\nGreatest number: %d", b);
    }
    else
    {
        printf("\nGreatest number: %d", c);
    }        
}