#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class dataSet{
private:
    const double initialCash = 546697;
    const int initialSurvived = 7;
    const int initialKilledInAction = 5;
    const int initialTotalRaids = 12;
    const double initialSurvivalRate = 0.58;
    const string initialDate = "07/03/2022";
private:
    int presentCash;
    int presentKIA;
    double presentTotalRaids;
    double presentSurvived;
    double presentSurvivalRate;
    string presentDate;
public:
    void initialDataSet();
    void readFromData();
    void writeToData();
    void getDifference();
}




/*
initialDataSet()
================
this data set takes the initial values
from the start of the experiment
and outputs them first.
==================
*/
void dataSet::initialDataSet(){
    //local variables.
    const double WIDTH = 18;
    const char FILL = ' ';
    const char LINE_FILL = '=';
    //introduction
    cout << setw(WIDTH * 3.5) << "TARKOV SURVIVAL EXPERIMENT\n";
    cout << setw(WIDTH * 5) << setfill(LINE_FILL) << "==========================\n";

    cout << left << setw(WIDTH) << setfill(FILL) << "CASH";
    cout << left << setw(WIDTH) << setfill(FILL) << "TOTAL RAIDS";
    cout << left << setw(WIDTH) << setfill(FILL) << "SURVIVED";
    cout << left << setw(WIDTH) << setfill(FILL) << "KIA";
    cout << left << setw(WIDTH) << setfill(FILL) << "SURVIVAL RATE%";
    cout << left << setw(WIDTH) << setfill(FILL) << "DATE" << endl;
    //output from private member variable
    cout << left << setw(WIDTH) << setfill(FILL) << initialCash;
    cout << left << setw(WIDTH) << setfill(FILL) << initialTotalRaids;
    cout << left << setw(WIDTH) << setfill(FILL) << initialSurvived;
    cout << left << setw(WIDTH) << setfill(FILL) << initialKilledInAction;
    cout << left << setw(WIDTH) << setfill(FILL) << initialSurvivalRate;
    cout << left << setw(WIDTH) << setfill(FILL) << initialDate << endl;
}

/*
readFromData()
==========================
this function will read
from the text file
holding the data/list
and output it to the
console.

and as long as the text
file has the data
in a certain order, it
will output to the
console.
*/
void dataSet::readFromData(){
    //local variables
    const double WIDTH = 18;
    const char FILL = ' ';
    const char LINE_FILL = '=';
    //local readFrom object
    ifstream readFile("tarkovDataList.txt");
    while (readFile >> presentCash >> presentTotalRaids >> presentSurvived >> presentKIA >> presentSurvivalRate >> presentDate){
    cout << left << setw(WIDTH) << setfill(FILL) << presentCash;
    cout << left << setw(WIDTH) << setfill(FILL) << presentTotalRaids;
    cout << left << setw(WIDTH) << setfill(FILL) << presentSurvived;
    cout << left << setw(WIDTH) << setfill(FILL) << presentKIA;
    cout << left << setw(WIDTH) << setfill(FILL) << setprecision(2) << presentSurvivalRate;
    cout << left << setw(WIDTH) << setfill(FILL) << presentDate << endl;
    }
}