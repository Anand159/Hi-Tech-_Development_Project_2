#include<stdio.h>
void name();
int main()
{
    name();
    return 0;
}
void name()
{   
    char name[10];
    printf("Please enter Account holder's name : ");
    scanf("%s",&name);

}