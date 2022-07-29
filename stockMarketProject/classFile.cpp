#include <iostream>
#include <iomanip>
#include "classFile.h"
using namespace std;
//SETTER_FILE
void ClassFile::setCapital()
{
    cout << "ENTER CAPITAL: $";
    cin >> capital;
}

void ClassFile::setReturnRate()
{
    cout << "ENTER RATE OF RETURN: %";
    cin >> returnRate;
}

void ClassFile::setYear()
{
    cout << "ENTER HOW LONG YOU WILL HOLD THE STOCK IN YEARS: #";
    cin >> year;
}

void ClassFile::setShareName()
{
    cout << "ENTER STOCK NAME: ";
    cin >> shareName;
}

void ClassFile::setSharePrice()
{
    cout << "ENTER CURRENT PRICE OF SHARE: $";
    cin >> sharePrice;
}
