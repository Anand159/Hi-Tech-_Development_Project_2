#include <stdio.h>
#include <string.h>
#include <ctype.h>

void createaccount(char acc[], char accname[], int *accbalance);
void deposit(char acc[], int accbalance);
void withdraw(char acc[], int accbalance);
void checkbalance(char acc[], char accname[], int accbalance);
void printdetails(char acc[], char accname[], int accbalance);

int main()
{
    int tasknumber;
    char acc[12];
    char accname[100];
    int accbalance = 0;
    int accountcreated = 0;
    int validInput = 0;
    char input[100];

    printf("\n****Banking Management System***");
    printf("\n       1- Create Account");
    printf("\n       2- Deposit");
    printf("\n       3- Withdraw");
    printf("\n       4- Check Balance");
    printf("\n       0- Exit");

    do
    {
        printf("\nPlease enter the task number : ");
        if (fgets(input, sizeof(input), stdin))
        {
            int validInput = 1;
            for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++)
            {
                if (!isdigit(input[i]))
                {
                    validInput = 0;
                    break;
                }
            }

            if (validInput)
            {
                sscanf(input, "%d", &tasknumber);
            }
            else
            {
                printf("Invalid input. Please enter a numeric task number.\n");
                continue; 
            }
        }

        switch (tasknumber)
        {
        case 1:
            if (accountcreated == 0)
            {
                createaccount(acc, accname, &accbalance);
                accountcreated = 1;
            }
            else
            {
                printf("Account already created\n");
            }
            break;
        case 2:
            if (accountcreated)
            {
                deposit(acc, accbalance);
            }
            else
            {
                printf("Please create an account first\n");
            }
            break;
        case 3:
            if (accountcreated)
            {
                withdraw(acc, accbalance);
            }
            else
            {
                printf("Please create an account first\n");
            }
            break;
        case 4:
            if (accountcreated)
            {
                checkbalance(acc, accname, accbalance);
            }
            else
            {
                printf("Please create an account first\n");
            }
            break;
        case 0:
            printf("\nExited program\n");
            break;
        default:
            printf("\nInvalid Task Number. Please try again\n");
        }
    } while (tasknumber != 0);

    return 0;
}

void createaccount(char acc[], char accname[], int *accbalance)
{
    printf("Please Enter 11 digit Account Number only: ");
    scanf("%s", acc);
    while (strlen(acc) != 11)
    {
        printf("Invalid account number format. Please enter 11 digit Account Number only: ");
        scanf("%s", acc);
    }

    printf("Please enter Account holder's name : ");
    scanf("%s", accname);

    printf("Please Enter Balance (Opening Amount must be at least 500): ");
    scanf("%d", accbalance);
    while (*accbalance < 500)
    {
        printf("Invalid balance amount. Please Enter Balance (Opening Amount must be at least 500): ");
        scanf("%d", accbalance);
    }

    printdetails(acc, accname, *accbalance);
}

void deposit(char acc[], int accbalance)
{
    int depositamount;
    printf("Enter deposit amount: ");
    scanf("%d", &depositamount);

    if (depositamount <= 0)
    {
        printf("Invalid deposit amount. Please enter a positive number.\n");
    }
    else
    {
        accbalance = accbalance + depositamount;
        printf("Deposit successful. Updated balance is: %d\n", accbalance);
    }
}

void withdraw(char acc[], int accbalance)
{
    int withdrawamount;
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawamount);

    if (withdrawamount <= 0)
    {
        printf("Invalid withdrawal amount. Please enter a positive number.\n");
    }
    else if (withdrawamount > accbalance - 500)
    {
        printf("Insufficient balance. Minimum balance of 500 must be maintained.\n");
    }
    else
    {
        accbalance = accbalance - withdrawamount;
        printf("Withdrawal successful. Updated balance is: %d\n", accbalance);
    }
}

void checkbalance(char acc[], char accname[], int accbalance)
{
    printf("\nAccount details:");
    printf("\nAccount Number: %s", acc);
    printf("\nAccount Holder's Name: %s", accname);
    printf("\nBalance: %d\n", accbalance);
}

void printdetails(char acc[], char accname[], int accbalance)
{
    printf("\nThank You for Joining Our Bank");
    printf("\nYour account details are:");
    printf("\nAccount Number: %s", acc);
    printf("\nAccount Holder's Name: %s", accname);
    printf("\nBalance: %d\n", accbalance);
}