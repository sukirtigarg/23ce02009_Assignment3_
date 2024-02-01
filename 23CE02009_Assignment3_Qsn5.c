/*Lab Assignment 3
Question No.5
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 26/1/24*/

#include <stdio.h>
int main()
{
    int i, fine;
    printf("Enter the number of days after which the book is returned: ");
    scanf("%d", &i);
    if (i <= 5)
    printf("Fine= %d", i);
    else if (i > 5 && i <=10) 
    {
        fine = 5*1 + (i-5)*2;
        printf("Fine= %d", fine);
    }
    else if (i > 10 && i <=30)
    {
        fine = 5*1 + 5*2 + (i-10)*5; 
        printf("Fine= %d", fine);
    }
    else
    {
      printf("Your membership is cancelled");  
    }
    
}