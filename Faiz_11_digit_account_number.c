#include<stdio.h>
#include<string.h>
void account();

int main()
{
     account();
    return 0;
}
void account()
{
    char account[11];
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