/*Write a C program to display the grade of student based on mark*/
#include<stdio.h>
int main()
{
        float m;
        printf("Enter Mark:");
        scanf("%f",&m);
        if (m>=91 && m<=100)
                printf("Grade:O\n");
        else if (m>=81 && m<=90)
                printf("Grade:A+\n");
        else if(m>=71 && m<=80)
                printf("Grade:A\n");
        else if(m>=61 && m<=70)
                printf("Grade:B+\n");
        else if(m>=50 && m<=60)
                printf("Grade:B\n");
        else if(m<50 && m>=0)
                printf("Grade:RA\n");
        else
                printf("Invalid input\n");
        return 0;
}
