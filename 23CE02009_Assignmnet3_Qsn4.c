/*Lab Assignment 3
Question No.4
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 26/1/24*/

#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the values of the coordinates (x1, y1), (x2,y2), (x3,y3): ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (((x2 - x1)*(x2 - x1) - (y2-y1)*(y2-y1)) == ((x3 - x1)*(x3 - x1) - (y3-y1)*(y3-y1)))
    printf("\nThe three points fall on the same line");
    else
    {
        printf("\nThe three points do not fall on the same line");
    }
}