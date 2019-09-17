// program to find largest from given 3 numbers.
#include<stdio.h>
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the numbers:");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("n1 is greater\n");
        }
        else
        {
            printf("n3 is greater\n");
        }
    }
    else if (n2 > n3)
        printf("n2 is the greater\n");
    else
        printf("n3 is the greater\n");
}