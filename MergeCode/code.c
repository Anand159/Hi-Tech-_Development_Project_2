#include<stdio.h>
#include<string.h>
char AccountNo[11];
int TotalBalance;

void CreateAccount();
void AccountDetails();
void deposite();
void Withdraw();
void checkbalance();

int main()
{
    int TaskNumber;

    printf("\n****Project 2 - Banking Management System***");
    printf("\n    1- Create Account");
    printf("\n    2- Deposit");
    printf("\n    3- Withdraw");
    printf("\n    4- check  balance");
    printf("\n    0- Exit");

    do
    {
        printf("\n\nPlease enter the task number : ");
        scanf("%d", &TaskNumber);
        
        if(TaskNumber==1)
        {
            CreateAccount();
        }
        else if(TaskNumber==2)
        {
            deposite();
        }
        else if(TaskNumber==3)
        {
            Withdraw();
        }
        else if(TaskNumber==4)
        {
            checkbalance();
        }
        else if(TaskNumber==0)
        {
            break;
        }
        else
        {
            printf("Invalid TaskNumber ");
        }

    }while(TaskNumber!=0);

    return 0;
}
void CreateAccount()
{
    char account[11];
    char name[10];
    int balance;
    do
    {
        printf("please Enter 11 digit Account Number only: ");
        scanf("%s",&account);
        if (strlen(account)==11)
        {
            printf("Please Enter Account Holder Name: ");
            scanf("%s",name);
            do
            {
                printf("Please Enter Balance (Opening Amount would be 500 minimum) ");
                scanf("%d",&balance);
            } while (balance<500); 
        }   
    } while (strlen(account)!=11);
    printf("\nThank You to join India Bank");
    printf("\nYour Account Details");
    printf("\nAccount Number : %s", account);
    printf("\nAccount Holder Name : %s", name);
    printf("\nAccount Balance : %d", balance);
    strcpy(AccountNo,account);
    TotalBalance=balance;
}
void AccountDetails()
{
    if(strlen(AccountNo)<1)
    {
        printf("\nError- Please Create Customer Account First ");
    }
    else
    {
        printf("\nAccount Number: %s",AccountNo);
        printf("\nTotal Balance: %d",TotalBalance);
    }
}
void deposite()
{
    if(strlen(AccountNo)<1)
    {
        printf("\nError- Please Create Customer Account First ");
    }
    else
    {
        int deposit;
        do
        {
            printf("Please Enter Amount to Deposit: minimum amount - 100 ");
            scanf("%d",&deposit);
        } while (deposit<100);
        TotalBalance+=deposit;

       AccountDetails();
    }
}
void Withdraw()
{
    if(strlen(AccountNo)<1)
    {
        printf("\nError- Please Create Customer Account First ");
    }
    else
    {
        int withdrawamount;
        printf("\n Please enter the withdraw Amount ");
        scanf("%d",&withdrawamount);
        TotalBalance-=withdrawamount;

        AccountDetails();
    }
}
void checkbalance()
{
    if(strlen(AccountNo)<1)
    {
        printf("\nError- Please Create Customer Account First ");
    }
    else
    {
        AccountDetails();
    }
}



