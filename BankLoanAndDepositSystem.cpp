


#include <iostream>

#include "Functions.h"
using namespace std;

class Bank
{
private:
     std::string name;
     std::string lastname;

     int old;
     int id;
     int numberOfMonth;
     double amount;
     double rate;
     double amountofLoan;
     double amountOfDeposit;
     bool state;
     //////////////////////////////////////

public:
     static int Count;
     void GeneralMain();
     void forChouser();
     int ForDeposit();
     int ForLoan();
     int GetId();
     void PrintBank();

     Bank()
     {
          Count++;
          id = Count;
     }
};

int Bank::Count = rand() % 3000;

int Bank::GetId()
{
     return id;
}

int Bank::ForLoan()
{
     ForLoanAlert();
     this->numberOfMonth = fornumberOfMonth();
     this->amount = Amount();
     state = true;
     if (3 <= numberOfMonth && numberOfMonth <= 12)
     {
          rate = 18;
          amountofLoan = Total(amount, rate, numberOfMonth);
          return amountofLoan;
     }

     else if (12 < numberOfMonth && numberOfMonth <= 48)
     {
          rate = 16;
          amountofLoan = Total(amount, rate, numberOfMonth);
          return amountofLoan;
     }
     else if (48 < numberOfMonth && numberOfMonth < INFINITY)
     {
          rate = 14;
          amountofLoan = Total(amount, rate, numberOfMonth);
          return amountofLoan;
     }

     else
     {
          std::cout << "error" << endl;
          return ForLoan();
     }
}

int Bank::ForDeposit()
{
     ForDepositAlert();
     this->numberOfMonth = fornumberOfMonth();
     this->amount = Amount();
     bool state = false;
     if (60 <= numberOfMonth && numberOfMonth <= 144)
     {
          rate = 12;
          amount = DepositTotal(amount, rate, numberOfMonth);

          return amount;
     }

     else if (12 < numberOfMonth && numberOfMonth < 60)
     {
          rate = 9.14;
          amountOfDeposit = DepositTotal(amount, rate, numberOfMonth);

          return amountOfDeposit;
     }

     else if (0 < numberOfMonth && numberOfMonth <= 12)
     {
          rate = 5.4;

          amountOfDeposit = DepositTotal(amount, rate, numberOfMonth);

          return amountOfDeposit;
     }

     else
     {
         
          cout << "Warning:Entered the wrong command!!!!!!!!!!!" << endl;
          return 0;
          
     }
}

void Bank::forChouser()
{
     forWelcome();

     forWhat();

     int swicher;

     cin >> swicher;

     switch (swicher)
     {
     case 1:
          ForDeposit();
          break;
     case 2:
          ForLoan();
          break;
     default:
          cout << "Opss erorr!!!!!" << endl;
          break;
     }
}

void Bank::GeneralMain()
{

     forGeneralMenu();
     this->name = forName();
     this->lastname = forLastname();
     this->old = forOld();
     cout << endl;

     if (name.empty())
     {
          cout << "You are not logged in.Please fill in the fields" << endl;
          GeneralMain();
     }
     else if (lastname.empty())
     {
          cout << "You are not logged in.Please fill in the fields" << endl;
          GeneralMain();
     }

     else
     {
          forChouser();
     }
}

void Bank::PrintBank()
{
     cout << "User name`" << name << " "
          << lastname << " "
          << '\n'
          << " User Old" << old << endl;

     cout << "User Id is` " << GetId() << endl;

     cout << "User acount Balance` " << endl;
     if (state)
     {
          forGraphiks(amount, rate, numberOfMonth);
     }
     else
     {

          cout << static_cast<int>(amountOfDeposit) << endl;
     }
};

int main()
{
     Bank E;
     E.GeneralMain();
     E.PrintBank();
     return 0;
}


////This Program have many bugs..... i will correct those bugs 




////////Depositi kutakman grafiky update-i jamanak