//Program to print the larger and smaller of the two numbers

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the 1st number: ");
    scanf("%d", &n1);

    printf("Enter the 2nd number:");
    scanf("%d", &n2);

    if(n1>n2)
        printf("larger number = %d and smaller number = %d", n1,n2);
    else
        printf("larger number = %d and smaller number = %d", n2,n1);  


}