//WAP of ATM ; Pin = 9325
#include <stdio.h>
int main()
{
    int pin;
    int choise;
    int amount;
    int recipt;
    int balance;
    int insert_amount;
    int n;
    int temp;
    int cash;

    balance = 0;
    n = 9325;
    cash = 1000;
start5:
    printf("\nEnter Card...\n");
start2:
    printf("\nEnter Pin = ");
    scanf("%d", &pin);

    if (pin == n)
    {
        printf("\n1.Withdrawl Cash\n2.Add Cash\n3.Account inquiry\n4.Pin Changer\n=>");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
        start:
            printf("\nEnter Amount : ");
            scanf("%d", &amount);
            if (amount <= cash)
            {
                if (100 <= amount)
                {
                    printf("Do You Want Recipt or You Want To Save Treas\n");
                    printf("1.Yes\n2.No\n=>");
                    scanf("%d", &recipt);
                    switch (recipt)
                    {
                    case 1:
                        printf("\nWithdrawal Amount = %d ", amount);
                        balance = cash - amount;
                        printf("\nTotal Balance Remaning = %d", balance);
                        cash = balance;
                        printf("\nThank You For Using Bank\n");
                        goto start5;
                        break;
                    case 2:
                        printf("\nThank You For Using Bank ");
                        printf("\nYour Recipt Will Be Sent On Regestered Mobile Number in PDF Formate\n");
                        balance = cash - amount;
                        cash = balance;
                        goto start5;
                        break;
                    default:
                        printf("Invalid Responce\nYour Recipt Will Be Sent On Regestered Mobile No in PDF Formate");
                    }
                }
                else
                {
                    printf("\nEnter Amount Greater Than 100");
                    goto start;
                }
            }
            else
            {
                printf("\nYou Don't Have enough money in your Account \n");
            }
            goto start5;
            break;
        case 2:
            printf("Enter Amount You Are Going To Insert\n=>");
            scanf("%d", &insert_amount);
            printf("Thank you For Entering Amount in Our Bank\n");
            balance = cash + insert_amount;
            printf("Your Total Balance : %d \n", balance);
            cash = balance;
            goto start5;
            break;
        case 3:
            printf("\nName : Soham Dayasagr Ganmote\nDOB : 6 Feb 2003\nPhone No : 9325293606\nBalance : %d", cash);
            goto start5;
            break;
        case 4:
            printf("\nPin Changer\n");
        start4:
            printf("\nEnter Your Old Pin : ");
            scanf("%d", &pin);
            if (pin == 9325)
            {
            start3:
                printf("Enter New Pin : ");
                scanf("%d", &n);
                temp = n;
                printf("Conferm New Pin : ");
                scanf("%d", &temp);
                if (n == temp)
                {
                    printf("Your Pin Changer Sucessfully\nThank You\n\n");
                    goto start2;
                }
                else
                {
                    printf("\nPin Dose't Match\n\n");
                    goto start3;
                }
            }
            else
            {
                printf("\nEnter Valid Pin");
                goto start4;
            }
        }
    }
    else
    {
        printf("\nWrong Password");
        goto start5;
    }
}