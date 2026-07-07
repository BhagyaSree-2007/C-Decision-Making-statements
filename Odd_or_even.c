/*Write a C program to check whether a number is odd or even*/
#include<stdio.h>
int main()
{
        int n;
        printf("Enter n:");
        scanf("%d",&n);
        if (n%2==0)
                printf("Number is even\n");
        else
                printf("Number is odd\n");
        return 0;
}
