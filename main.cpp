///C++ Casino game application
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;
int main()
{
    int name=0,deposit=0,betmoney=0,betnum=0,random=0,yesNo,deposit2=0;
    bool isTrue=true,yes=true,no=false;
    system("COLOR 2E");
    /*  Color Codes:-

            0 = Black       8 = Gray
            1 = Blue        9 = Light Blue
            2 = Green       A = Light Green
            3 = Aqua        B = Light Aqua
            4 = Red         C = Light Red
            5 = Purple      D = Light Purple
            6 = Yellow      E = Light Yellow
            7 = White       F = Bright White
    */
    //Intro to game
    printf("\n______________________________________________________________________________________________________________");
    printf("\n\n\n\t\t\t\t\t\tCASINO GAME\n\n");
    printf("\n______________________________________________________________________________________________________________");
    //User intro
    printf("\n\n\n\tEnter your name: ");
    scanf("%s",&name);
    //Amount user has
    while(deposit==0)
    {
        printf("\n\n\n\tEnter deposit money: $");
        scanf("%d",&deposit);
        if (deposit==0)
        {
            printf("\tPlease make a deposit to countinue.");
        }
    }
    printf("\n\t");
    while(isTrue!=false)
    {
        //Commands to clear screen
        system("pause");
        system("cls");
        printf("\n______________________________________________________________________________________________________________");
        printf("\n\n\n\t\t\t\t\t\tCASINO GAME\n\n");
        printf("\n______________________________________________________________________________________________________________");
        //Rules of the game
        cout << "\n\n\n----------------------------------Rules_of_the_game----------------------------------"
             << "\n\t1) Choose any number between 1 to 10."
             << "\n\t2) If you win you will get 10X betting money."
             << "\n\t3) If you bet on the wrong number you will lose the betting money."
             << "\n-------------------------------------------------------------------------------------";
        printf("\n\n\tYour current balance: $%d",deposit);
        printf("\n\t%s, enter money to bet: $",&name);
        scanf("%d",&betmoney);
        while(betmoney>deposit)
        {
            printf("\tNot enough funds.");
            printf("\n\t%s, enter money to bet: $",&name);
            scanf("%d",&betmoney);
        }
        deposit-=betmoney;
        printf("\n\tGuess your number to bet on between 1 to 10: ");
        scanf("%d",&betnum);
        while(betnum>10)
        {
            printf("\tChoose a number between 1 to 10.");
            printf("\n\tGuess your number to bet on between 1 to 10: ");
            scanf("%d",&betnum);
        }
        srand(time(0));
        random = rand() % 10 + 1;
        random=7;
        if(betnum==random)
        {
            printf("\n\tGOOD JOB!You won 10X $%d (which is $%d)",betmoney,betmoney*10);
            deposit=deposit+(betmoney*10);
        }
        else
        {
            printf("\n\tBAD LUCK!You lost $%d",betmoney);
        }
        printf("\n\n\tThe winning number was: %d",random);
        printf("\n\tYour current balance: $%d\n\t",deposit);
        system("pause");
        system("cls");
        printf("\n______________________________________________________________________________________________________________");
        printf("\n\n\n\t\t\t\t\t\tCASINO GAME\n\n");
        printf("\n______________________________________________________________________________________________________________");

        yes=true;
        while(yes!=no)
        {
            printf("\n\n\n\tTo play again enter 1, else enter 0: ");
            scanf("%d",&yesNo);
            if (yesNo == 0)
            {
                printf("\n\n\n\tThank you for playing.\n\n\tHope you had fun.");
                isTrue = no,yes = no;
            }
            else if (yesNo==1)
            {
                printf("\n\n\n\tDo you want to deposit more money(enter 0 if not): $");
                scanf("%d",&deposit2);
                deposit=deposit+deposit2;
                isTrue = yes;
                yes = no;
            }
            else
            {
                yes=true;
            }
        }
    }
    return 0;
}
