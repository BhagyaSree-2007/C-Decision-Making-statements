/*Write a C program to calculate electricity bill*/
#include<stdio.h>
int main()
{
        float u,b;
        printf("Enter units:");
        scanf("%f",&u);
        if (u<=100 && u>=0)
                printf("No charge\n");
        else if (u>=101 && u<=200)
        {
                b=(u-100)*5;
                printf("Bill=Rs.%f\n",b);
        }
        else if (u>200)
        {
                b=((u-200)*10)+(100*5);
                printf("Bill=Rs.%f\n",b);
        }
        else
                printf("Invalid input\n");
        return 0;
}
