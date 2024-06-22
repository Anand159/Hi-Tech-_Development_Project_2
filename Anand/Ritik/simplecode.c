#include <stdio.h>
#include <string.h>
void createaccount();
void account(char acc[]);
void name(char accname[]);
int balance();

int main()
{
    int TaskNumber;

    printf("\n*******Project 2 - Banking Management System**********");
    printf("\n1- Create Account");
    printf("\n2- Deposit");
    printf("\n3- Withdraw");
    printf("\n4- Check Balance");
    printf("\n0- Exit");

    while (1)
    {
        printf("\nPlease enter the task number : ");
        scanf("%d", &TaskNumber);

        if (TaskNumber == 1)
        {
            createaccount();
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
            printf("Invalid Task Number \n");
        }
    }

    return 0;
}

void createaccount()
{
    char acc[11];
    char accname[100];
    int accbalance;

    account(acc);
    name(accname);
    accbalance = balance();
    
    printf("\nThank You for Joining India Bank!");
    printf("\nYour account details are:");
    printf("\nAccount Number: %s", acc);
    printf("\nAccount Holder's Name: %s", accname);
    printf("\nBalance: %d\n", accbalance);
}

void account(char acc[])
{
    while (1)
    {
        printf("Please Enter 11 digit Account Number only: ");
        scanf("%11s", acc);
        if (strlen(acc) == 11)
        {
            break;
        }
    }
}

void name(char accname[])
{   
    printf("Please enter Account holder's name : ");
    scanf("%s", accname);
}

int balance()
{
    int amount;
    while (1)
    {
        printf("Please Enter Balance (Opening Amount would be 500 minimum): ");
        scanf("%d", &amount);
        if (amount >= 500)
        {
            break;
        }
    }
    
    return amount;
}
