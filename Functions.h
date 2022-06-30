#include <iostream>
#include <cmath>
using namespace std;

void forGeneralMenu()
{
    cout << " What does this program do?" << '\n'
         << " 1.Takes deposit" << '\n'
         << " 2.Provides loans" << endl;
    cout << '\n';
}
void forWelcome()
{
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "$$$$ WelCome Bank Manegement Sysytem $$$$" << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
}
void forWhat()
{
    cout << "1.For Deposit" << '\n'
         << "2.For the loan" << endl;
}
string forName()
{
    cout << "Enter your name" << endl;
    std::string name;
    getline(cin, name);
    return name;
}
string forLastname()
{
    cout << "Enter your lastname" << endl;
    std::string lastname;
    getline(cin, lastname);
    return lastname;
}

void ForDepositAlert()
{
    cout << "Its a For Deposit" << endl;

    cout << "Long-term deposit  60 to 144 month, for yearly 12%" << endl;
    cout << "Short-term deposit 12 to 48 month, for yearly 9.14%" << endl;
    cout << "Deposit up to 12 month, for monthly 5.4%" << endl;
}
double Amount()
{
    double amount;
    cout << "Please say your amountendl" << endl;
    cin >> amount;
    return amount;
};

int fornumberOfMonth()
{
    int numberOfMonth;
    cout << "Please Choose Month! " << endl;
    cin >> numberOfMonth;
    return numberOfMonth;
}

void ForLoanAlert()
{
    cout << "Its a For Kredit Programm" << std::endl;

    cout << "Kredit for Monthly numberOfMonth,3 to 12 month, to 18%" << endl;
    cout << "Kredit for short numberOfMonth 12 to 48 month, to 16 %" << endl;
    cout << "Kredit for long numberOfMonth  49 to infinti, for yearly 14%" << endl;
}

int DepositTotal(double amount, double rate, double month)
{
    rate = rate / 100;
    double tmp = pow((1 + (rate / 12)), month);
    amount = amount * tmp;
    return amount;
}











double Total(double lounAmount, double interestRate, double numberOfMonth)
{

    interestRate = (interestRate / 100) / 12;
    lounAmount = lounAmount * interestRate / (1 - 1 / (pow(1 + interestRate, numberOfMonth)));
    return lounAmount;
}

int forOld()
{
    int old = 0;
    cout << "How Old are you" << endl;
    cin >> old;
    if (old > 18 && old < 30)
    {
        cout << "Hello young man) !!! " << endl;
        return old;
    }
    if (old >= 30 && old < 50)
    {
        cout << "Hello we will be help you) !!! " << endl;
        return old;
    }
    else
    {
        cout << "Oppsss error" << endl;
        cout << "Please reviouse it" << endl;
        return forOld();
    }
};

void forGraphiks(double GeneralAmount, double RATE, int month)
{
    RATE = RATE / 100 / 12;
    double AnutentLoan;

    double MonthRate;

    double MotherMoney;

    double tokosYndhanur;

    double GeneralAmountBalance;
    AnutentLoan = GeneralAmount * RATE / (1 - 1 / (pow(1 + RATE, month)));
    std::cout << "Varki Gumar"
              << " ! "
              << "Amsekan Tokos"
              << " ! "
              << "Mayr Gumar"
              << " ! "
              << "Mnacord" << endl;

    for (int i = 0; i < month; i++)
    {

        MonthRate = GeneralAmount * RATE;

        MotherMoney = AnutentLoan - MonthRate;

        GeneralAmountBalance = GeneralAmount - MotherMoney;
        GeneralAmount = GeneralAmountBalance;
        tokosYndhanur += MonthRate;

        std::cout << static_cast<int>(AnutentLoan) << "       !    " << static_cast<int>(MonthRate) << "  !    " << static_cast<int>(MotherMoney) << "   !   " << static_cast<int>(GeneralAmountBalance) << endl;
    }

    std::cout << "Varki amsekan gumar " << static_cast<int>(AnutentLoan) << endl;
    std::cout << "Yndhanur tokosagumar " << static_cast<int>(tokosYndhanur) << endl;
}