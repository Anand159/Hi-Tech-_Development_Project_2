#include <stdio.h>
#include <string.h>

int main()
{
    int TaskNumber;

    printf("\n*******Project 2 - Banking Management System**********");
    printf("\n1- Create Account");
    printf("\n2- Deposit");
    printf("\n3- Withdraw");
    printf("\n4- check  balance");
    printf("\n0- Exit");

    while (1)
    {

        printf("\nPlease enter the task number : ");
        scanf("%d", &TaskNumber);

        if (TaskNumber == 1)
        {
            
        }
        else if (TaskNumber == 2)
        {
        }
        else if (TaskNumber == 3)
        {
        }
        else if (TaskNumber == 4)
        {
        }
        else if (TaskNumber == 0)
        {
            break;
        }
        else
        {
            printf("\nInvalid TaskNumber");
        }
    }

    return 0;
}