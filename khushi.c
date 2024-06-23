#include <stdio.h>
#include <string.h>

int deposit;

void Deposit();

void Deposit()
{

    while (1)
    {

        printf("Please Enter Amount to Deposit:minimun amount-100  ");
        scanf("%d", &deposit);
        if (deposit >= 100)
        {

            break;
        }
    }
    printf("\nAccount Number : %s", accountnumber);
    printf("\nTotal Number : %d", balance += deposit);
}
