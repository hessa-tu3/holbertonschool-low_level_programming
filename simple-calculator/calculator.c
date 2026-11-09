#include <stdio.h>

int main(void)
{
int choice;
double a;
double b;
double result;
do 
{
    /* */

    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
    printf("Choice: ");
    scanf("%d", &choice);
    if (choice == 0)
{
    printf("Bye!\n");

}
else if (choice == 1)

{
 
printf("A: ");
scanf("%lf" ,&a);
printf("B: ");
scanf("%lf" ,&b);
result = a + b;
printf("Result: %g\n", result);

}
else if (choice == 2)
{
   printf("A: ");
scanf("%lf" ,&a);
printf("B: ");
scanf("%lf" ,&b);
result = a -  b;
printf("Result: %g\n", result);
}
else if (choice == 3)
{
    printf("A: ");
scanf("%lf" ,&a);
printf("B: ");
scanf("%lf" ,&b);
result = a * b;
printf("Result:%g\n", result);
}
else if (choice == 4)
{
    printf("A: ");
    scanf("%lf", &a);

    printf("B: ");
    scanf("%lf", &b);

    if (b == 0)
    {
        printf("Error: division by zero\n");
    }
    else
    {
        result = a / b;
        printf("Result: %g\n", result);
    }
}
else if (choice <  1|| choice > 4)
{
  printf("Invalid choice\n");
}

}while (choice != 0);
 
    return (0);
}
