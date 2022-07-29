#include <iostream>
#include <iomanip>
#include "classFile.h"
using namespace std;
//FEATURE_FILE

/*
ClassFile::buyShareFunction
==========================
this function allows the user
to input how many shares they can
buy according to their capital.

if the amount of shares they will buy
exceeds the amount of capital that
they hold, it will ask the user
to enter again the amount of shares they
can buy in a while loop.
*/

void ClassFile::buyShareFunction()
{
    //local variable
    int total;
    cout << endl;
    cout << "CALCULATING HOW MANY SHARES YOU CAN BUY" << endl;
    total = capital / sharePrice;
    cout << "YOU CAN PURCHASE A MAX OF " << total << " SHARES" << endl;

    cout << "ENTER PURCHASE AMOUNT (MAX OF " << total << "): #";
    cin >> purchasedShares;

    while (purchasedShares > total)
    {
        cout << "YOU CANNOT BUY MORE THAN " << total << " SHARES" << endl;
        cout << "ENTER PURCHASE AMOUNT (MAX OF " << total << "): #";
        cin >> purchasedShares;
    }
}


/*
ClassFile::triMonthlyReinvestment()
=====================================
this function allows the user
to set a tri-monthyl reinvestment.
*/


void ClassFile::triMonthlyReinvestment()
{
        double invest;
        cout << "ENTER INITIAL REINVESTMENT: $";
        cin >> invest;
        reinvestments = invest * 3;
}

/*
ClassFile::calculateReturn()
============================
this function calculates how
much the user will make according
to the interest rate of return, on
their investment.


it will add up tri-monthly
investments if there are any to the valueOfShares.

this is to simulate the cares act
funds. or any other source of income.
*/


void ClassFile::calculateReturn()
{
    cout << "CALCULATING RETURN" << endl;

    double valueOfShares;
    valueOfShares = purchasedShares * sharePrice;

    for (int counter = 0; counter < year; counter++)
    {
        valueOfShares += valueOfShares * returnRate;
        valueOfShares += reinvestments;
        cout << shareName << " [YEAR " << " " << (counter + (2022 + 1)) << "] $" << valueOfShares << endl;
    }
}

/*
ClassFile::reRunProgram()
==========================
this function allows the user
to run the program again.
*/
void ClassFile::reRunProgram()
{
    cout << endl;
    cout << "RUN THE PROGRAM AGAIN? yes/no: ";
    string input;
    string menuInput;
    cin >> input;
    if (input == "yes")
    {
        cout << "START FROM: " << endl;
        cout << "1. BEGINNING" << endl;
        cout << "2. YEAR INPUT" << endl;
        cout << "3. QUIT" << endl;

        cin >> menuInput;

        if (menuInput == "1")
        {
            system("CLS");
            mainProgram();
        }
        else if (menuInput == "2")
        {
            system("CLS");
            setYear();
            calculateReturn();
            reRunProgram();
        }
        else
        {
            system("CLS");
            cout << endl;
            cout << "PRESS ANY KEY TO QUIT";
        }
    }

    else
    {
        system("CLS");
        cout << "PRESS ANY KEY TO QUIT";
        cout << endl;
    }

}
