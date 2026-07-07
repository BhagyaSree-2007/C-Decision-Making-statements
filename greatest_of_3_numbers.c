/*Write a C Program to find greatest of three numbers*/
#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter a,b,c:");
        scanf("%d,%d,%d",&a,&b,&c);
        if (a>b && a>c)
                printf("a is the greatest\n");
        else if(b>c)
                printf("b is the greatest\n");
        else
                printf("c is the greatest\n");
        return 0;
}
