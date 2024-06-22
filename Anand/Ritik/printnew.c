#include<stdio.h>
int main()
{
    createaccount();
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