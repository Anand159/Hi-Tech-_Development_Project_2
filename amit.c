// code from amit singh
#include<stdio.h>
void balance();
int main()
{
 balance();
 return 0;
}
void balance()
{
    int amount;
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

