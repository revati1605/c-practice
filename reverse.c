#include<stdio.h>

int reverse(int num)
{
    int revr = 0;
    while(num != 0)
    {
        int digit = num % 10;
        revr = revr * 10 + digit;
        num = num / 10;
    }
    return revr;
}

int main()
{
    int num, revr = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    revr = reverse(num);
    printf("Number after reverse is: %d\n", revr);
    return 0;
}

