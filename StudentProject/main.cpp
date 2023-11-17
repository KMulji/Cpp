#include <iostream>
#include "Account.hpp"
#include "Bank.hpp"

long Account::NextId = 0;
int main()
{
    std::cout << "*****Welcome to the banking system******" << std::endl;
    std::cout << "Select a choice below" << std::endl;
    std::cout << "1. Find a account" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Show all accounts" << std::endl;
    std::cout << "5. Delete a account" << std::endl;
    std::cout << "6. Create a new account" << std::endl;
    std::cout << "7. Exit" << std::endl;

    int opt = -1;
    Bank b = Bank();
    long accountNo = -1;
    float deposit = 0.f;
    Account a;
    std::string fname = "";
    std::string lname = "";

    do
    {
        std::cin >> opt;
        switch (opt)
        {
        case 1:
            std::cout << "Enter Account Number";
            std::cin >> accountNo;
            a = b.FindAccount(accountNo);
            std::cout << a << std::endl;
            break;
        case 2:
            std::cout << "Enter Account number";
            std::cin >> accountNo;
            std::cout << "Enter Deposit amount";
            std::cin >> deposit;
            a = b.Deposit(deposit, accountNo);
            std::cout << a << std::endl;
            break;
        case 3:
            std::cout << "Enter Account number";
            std::cin >> accountNo;
            std::cout << "Enter Withdraw amount";
            std::cin >> deposit;
            a = b.WithDraw(deposit, accountNo);
            std::cout << a << std::endl;
            break;
        case 4:
            b.ViewAccounts();
            break;
        case 5:
            std::cout << "Enter Account Number";
            std::cin >> accountNo;
            b.DeleteAccount(accountNo);
            break;
        case 6:
            std::cout << "Enter first name";
            std::cin >> fname;
            std::cout << "Enter last name";
            std::cin >> lname;
            std::cout << "Enter deposit amount";
            std::cin >> deposit;
            a = b.CreateAccount(fname, lname, deposit);
            std::cout << a << std::endl;
            break;
        default:
            std::cout << "Wrong option" << std::endl;
            std::cout << "Select a choice below" << std::endl;
            std::cout << "1. Find a account" << std::endl;
            std::cout << "2. Deposit" << std::endl;
            std::cout << "3. Withdraw" << std::endl;
            std::cout << "4. Show all accounts" << std::endl;
            std::cout << "5. Delete a account" << std::endl;
            std::cout << "6. Creat a new account" << std::endl;
            std::cout << "7. Exit" << std::endl;
            break;
        }
    } while (opt != 7);

    return 0;
}