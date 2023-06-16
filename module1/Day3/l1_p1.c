#include <stdio.h>

void print_Dec(int n);
void printSpaces(int n);
void print_Inc(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--)
    {
        print_Inc(i);
        printSpaces((n - i) * 2);
        print_Dec(i);
        printf("\n");
    }
    
    return 0;
}

void print_Dec(int n)
{
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
}

void printSpaces(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
    }
}

void print_Inc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
}