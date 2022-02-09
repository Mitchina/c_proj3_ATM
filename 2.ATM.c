#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int selection=0;
    const int BALANCE = 1;
    const int DEPOSIT = 2;
    const int WITHDRAWAL = 3;
    const int EXIT = 4;
    int balance=0;

    do
    {
        printf("%s\n", "1.BALANCE");
        printf("%s\n", "2.DEPOSIT");
        printf("%s\n", "3.WITHDRAWAL");
        printf("%s\n", "4.EXIT");
        printf("%s\n", "Choose your operation: ");
        scanf("%d", &selection);

        switch(selection)
        {
        case 1:
            {
                printf("%s\n", "------------BALANCE------------");
                printf("The balance is: %d\n", balance);

            }
            printf("--------------\n");
            break;
        case 2:
            {
                int amount;

                printf("%s\n", "------------DEPOSIT------------\n");
                printf("%s\n", "Enter the amount to deposit: ");
                scanf("%d", &amount);

                balance = balance + amount;
                printf("The amount deposited is: %d\n", amount);

            }
            printf("--------------\n");
            break;
        case 3:
            {
                int amount;

                printf("%s\n", "------------WITHDRAWAL------------\n");
                printf("%s\n", "Enter the amount to be withdrawn: ");
                scanf("%d", &amount);

                balance = balance - amount;
                printf("The amount withdrawn is: %d\n", amount);
            }
            printf("--------------\n");
            break;
        case 4:
            printf("You left.\n");
            printf("--------------\n");
            break;
        default:
            printf("Wrong selection!\n");
            break;
        }
    }
    while(selection!=4);

    printf("\n");

    system("PAUSE");
    return 0;

}
