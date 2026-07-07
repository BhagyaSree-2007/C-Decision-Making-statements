/*Write a C program to check whether a number is divisible by 5 and not an even number*/
#include<stdio.h>
int main()
{
        int n;
        printf("Enter a number:");
        scanf("%d",&n);
        if(n%5==0 && n%2!=0)
                printf("n is not even and is divisible by 5\n");
        else if(n%5!=0 && n%2==0)
                printf("n is not divisible by 5 and is an even number\n");
        else if(n%5==0 && n%2==0)
                printf("n is divisible by 5 and is an even number\n");
        else
                printf("n is not divisible by 5 and is not an even number\n");
        return 0;
}
