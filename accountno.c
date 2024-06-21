#include <stdio.h>
#include <string.h>


void accountnumber();

void main() 
{
    accountnumber();
}


void accountnumber() 
{
    char accountNumber[20]; 

    while (1)
     {
        printf("Please Enter 11 digit Account Number only: ");
        scanf("%s", accountNumber);

        
        if (strlen(accountNumber) == 11)
         {
            int isValid = 1;
 
            
            for (int i = 0; i < 11; i++) 
            {
                if (accountNumber[i] < '0' || accountNumber[i] > '9')
                 {
                    isValid = 0;
                    break;
                }
            }
         }
     }
}
