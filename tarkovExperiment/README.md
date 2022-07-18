=============
INTRODUCTION:
=============

    Hello, this program is for an experiment that I wanted to do.
    Tarkov keeps track of certain data, how many raids you survive/die.
    The amount of rubles you have in your stash, your kill/death ratio.

    What I wanted to do was to find just how long it would take me to
    get significant improvements in my ruble and kill/death ratio.

    And to do so I need to first track that information so this is what
    this program essentially does.

===========
HOW TO RUN:
===========

    So I ran this program using the codeBlocks Ide.

    You have to make a data file as a .txt file, where the .cpp file is located
    I named my data file "tarkovDataList.txt"

    If you want to change the name of the data file you have to go to the functions
    writeToData(), and readFromData().

==============
DOCUMENTATION:
==============

class dataSet{};
    this class has private member variables that
    give the program the initial starting data.

    this class also has private member variables
    that can only be edited by the public functions.

    this class has four functions:

    initialDataSet() :: this function outputs the initial
                        starting data to the console

    writeToData() :: this function allows the user
                     to input the most recent tarkov data

    readFromData() :: this function outputs all the data
                      from the data file located where
                      the .cpp file is.

    getDifference() :: this function works as a calculator
                       for the data set, taking the initial
                       and subtracting/dividing to get the
                       difference between both data sets.

int main()
    this is where the main program is located.

    it is structured with writeToData() first so that
    the console window is more readable by having
    the user input, and then reading out the entire data
    list.

    the user input should follow this format: 
    CASH // TOTAL RAIDS // SURVIVED // MONTH/DAY/YEAR

    if followed correctly it will then output:
    CASH // TOTAL RAIDS // SURVIVED // KILLED IN ACTION // KILL/DEATH RATIO // DATE(MONTH/DAY/YEAR)