#include <stdio.h>

int main(void)
{
    int choice;
 int a;
int b;
int result;
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
scanf("%d" ,&a);
printf("B: ");
scanf("%d" ,&b);
result = a + b;
printf("Result: %d\n", result);

}
else if (choice == 2)
{
   printf("A: ");
scanf("%d" ,&a);
printf("B: ");
scanf("%d" ,&b);
result = a -  b;
printf("Result: %d\n", result);
}
else if (choice == 3)
{
    printf("A: ");
scanf("%d" ,&a);
printf("B: ");
scanf("%d" ,&b);
result = a + b;
printf("Result: %d\n", result);
}

else if (choice <  1|| choice > 4)
{
  printf("Invalid choice\n");
}

}while (choice != 0);
 
    return (0);
}
