#include <stdio.h>
void withdraw();

int main()
{
    withdrw();
}
void withdraw()
{

    int amount;
    amount = balance();
    int withdraw;
    
    printf("enter amount to withdraw");
    scanf("%d", &withdraw);
    if (amount > withdraw)
    {
        amount = amount - withdraw;
        printf("\n your account balance : %d", amount);
    }
}