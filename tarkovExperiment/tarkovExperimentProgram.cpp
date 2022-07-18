#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib> //needed for system clear on windows computer //test
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

/*
writeToData()
=================================
this function will add a new
piece of data into the text
file/data list in a certain
order.
*/
void dataSet::writeToData(){
    //ask user for input.
    cout << "ENTER CURRENT AMOUNT OF RUBLES: ";
    cin >> presentCash;
    cout << "ENTER TOTAL RAIDS: ";
    cin >> presentTotalRaids;
    cout << "ENTER TOTAL RAIDS SURVIVED: ";
    cin >> presentSurvived;
    cout << "ENTER TODAYS DATE: ";
    cin >> presentDate;
    //calculation.
    presentKIA = presentTotalRaids - presentSurvived;
    presentSurvivalRate = presentSurvived / presentTotalRaids;

    ofstream writeFile("tarkovDataList.txt", fstream::app);
    //the fstream::app makes it where when you write to fill it will only add and not overwrite.
    writeFile << presentCash << " " << presentTotalRaids << " " << presentSurvived << " "
              << presentKIA << " " << presentSurvivalRate << " " << presentDate << endl;
    writeFile.close();
    system("CLS");
}

/*
getDifference()
=======================
this function gets the
difference between
the present data set
and the initial data
set from the start
of the experiment.
*/
void dataSet::getDifference(){
    //local variables
    int cash;
    double totalRaids, survived, kia, survRate;
    //local constant variables
    const double WIDTH = 18;
    const char FILL = ' ';
    const char LINE_FILL = '=';
    //calculations
    cash = presentCash - initialCash;
    totalRaids = presentTotalRaids - initialTotalRaids;
    survived = presentSurvived - initialSurvived;
    kia = presentKIA - initialKilledInAction;
    survRate = presentSurvivalRate - initialSurvivalRate;

    cout << endl;

    cout << left << setw(WIDTH) << setfill(FILL) << cash;
    cout << left << setw(WIDTH) << setfill(FILL) << totalRaids;
    cout << left << setw(WIDTH) << setfill(FILL) << survived;
    cout << left << setw(WIDTH) << setfill(FILL) << kia;
    cout << left << setw(WIDTH) << setfill(FILL) << survRate << endl;
}
