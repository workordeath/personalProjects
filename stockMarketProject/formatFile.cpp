#include <iostream>
#include <iomanip>
#include "classFile.h"
using namespace std;
//FORMAT_FILE

void ClassFile::mainProgram()
{
    setCapital();
    setShareName();
    setSharePrice();
    buyShareFunction();
    setYear();
    setReturnRate();
    triMonthlyReinvestment();
    calculateReturn();
    reRunProgram();
}
