/*Write a C program to develop a simple calculator*/
#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,c;
        printf("Enter 2 numbers:");
        scanf("%d,%d",&a,&b);
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n6.Square\n7.Square root\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
                case 1:
                        printf("Sum=%d\n",a+b);
                        break;
                case 2:
                        printf("Difference=%d\n",a-b);
                        break;
                case 3:
                        printf("Product=%d\n",a*b);
                        break;
                case 4:
                        if (b==0)
                                printf("0 is not allowed in division\n");
                        else
                                printf("Quotient:%d\n",a/b);
                        break;
                case 5:
                        if (b==0)
                                printf("0 is not allowed\n");
                        else
                                printf("Modulo:%d\n",a%b);
                        break;
                case 6:
                        printf("Square of a:%lf\n", pow(a,2));
                        printf("Square of b:%lf\n", pow(b,2));
                        break;
                case 7:
                        if (a<0)
                                printf("Negative number is not allowed for square root");
                        else
                                printf("Square root of a=%lf\n",pow(a,0.5));
                        break;
                default:
                        printf("Invalid input\n");
        }
        return 0;
}
