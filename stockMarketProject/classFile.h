
class ClassFile
{
private:
    double capital;
    double reinvestments;
    double returnRate;
private:
    double sharePrice;
    char shareName[5];
private:
    int year;
    int purchasedShares;
public:
    void setCapital();
    void setReturnRate();
    void setYear();
    void setSharePrice();
    void setShareName();
public:
    void buyShareFunction();
    void triMonthlyReinvestment();
    void calculateReturn();
public:
    void mainProgram();
    void reRunProgram();
};
