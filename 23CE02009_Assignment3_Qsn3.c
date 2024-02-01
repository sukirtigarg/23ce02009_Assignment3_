/*Lab Assignment 3
Question No.3
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 26/1/24*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a+c > b && a+b > c && b+c > a) 
    {
        printf("\na, b and c are the sides of a triangle.");
    }
    else 
    {
        printf("\na, b and c are not the sides of a triangle.");
    } 
}