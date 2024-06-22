#include <stdio.h>
#include <string.h>

void createaccount();
void account(char acc);
void name(char name);
void balance(int amount);
void print(char acc, char name, int amount);

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
            printf("\nInvalid TaskNumber");
        }
    }

    return 0;
}

void createaccount()
{
    char acc[11];
    char accName[50];
    int accBalance;

    account(acc);
    name(accName);
    balance(&accBalance);
    print(acc, accName, accBalance);
}

void account(char acc)
{
    while (1)
    {
        printf("Please Enter 11 digit Account Number only: ");
        scanf("%s", &account);
        if (strlen(account) == 11)
        {
            break;
        }
    }
    
}
void name(char name)
{
    printf("Please enter Account holder's name : ");
    scanf("%s", name);
}

void balance(int amount)
{
    while (1)
    {
        
        printf("Please Enter Balance (Opening Amount would be 500 mininum) ");
        scanf("%d", &amount);
        if (amount >= 500)
        {
            break;
        }
    }   
}

void print(char acc, char name, int amount)
{
    printf("\nThank You for Joining India Bank!");
    printf("\nYour account details are:");
    printf("\nAccount Number: %s", acc);
    printf("\nAccount Holder's Name: %s", name);
    printf("\nBalance: %d\n", amount);
}