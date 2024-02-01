/*Lab Assignment 3
Question No.7
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 26/1/24*/

#include <stdio.h>
int main()
{
    float m, n, k, w, t;
    printf("Enter the no. of marks obtained, no. of classes attended and no. of classes conducted:");
    scanf("%f%f%f", &m, &n, &k);
    w = n/k;
    t = m*w;
    if (t >= 90)
    printf("\nGrade = EX");
    else if (t >=80 && t < 89)
    {
        printf("\nGrade =A");
    }
    else if (t >=70 && t < 79)
    {
        printf("\nGrade =B");
    }
    else if (t >= 60 && t < 69)
    {
        printf("\nGrade =C");
    }
    else if (t>= 50 && t < 59)
    {
        printf("\nGrade =D");
    }
    else if (t >= 40 && t < 49 )
    {
        printf("\nGrade = P");
    }
    else
    {
        printf("\nGrade = F");
    }
}

