// program to print number is even or odd

#include<stdio.h>
int main()
{
    int n1;
    printf("Enter number: ");
    scanf("%d", &n1);

    if(n1 % 2 == 0)
        printf("Number is even")
    else
        printf("number is odd");
    
    
}