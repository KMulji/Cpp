// account.h
#ifndef BANK_H // include guard
#define BANK_H
#include <map>
#include <string>
#include "Account.hpp"

class Bank
{
private:
    std::map<long, Account> mp;

public:
    Bank();
    Account CreateAccount(std::string Fname, std::string Lname, float Balance);
    Account FindAccount(long id);
    Account Deposit(float amount,long id);
    Account WithDraw(float amount,long id);
    void DeleteAccount(long id);
    void ViewAccounts();
    ~Bank();

};

#endif /* MY_CLASS_H */