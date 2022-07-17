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