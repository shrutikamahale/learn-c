//Program to print a message if negative number is entered

# include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number < 0)
        printf("The entered number is negative.");
}