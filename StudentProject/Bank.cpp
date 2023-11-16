#include <fstream>
#include <map>
#include <iostream>
#include "Account.hpp"
#include "Bank.hpp"
Bank::Bank(std::string Fname, std::string Lname, float Balance)
{
    // we read from the file into the map.
    Account a;
    std::ifstream ifs;
    ifs.open("Banks.txt", std::ios::trunc);

    if (!ifs)
    {
        return;
    }
    while (!ifs.eof())
    {
        ifs >> a;
        mp.insert(std::pair<long, Account>(a.GetId(), a));
    }
    Account::SetNextId(a.GetId());

    ifs.close();
}
Account Bank::CreateAccount(std::string Fname, std::string Lname, float Balance)
{
    // we create an account, add to map and write to the file.
    Account a(Fname, Lname, Balance);
    mp.insert({a.GetId(), a});
    std::ofstream ofs("Banks.txt");

    std::map<long, Account>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        ofs << it->second;
    }

    ofs.close();

    return a;
}
Account Bank::Deposit(float amount, long id)
{

    std::map<long, Account>::iterator it = mp.find(id);
    float sum = it->second.GetBalance() + amount;
    it->second.SetBalance(sum);
    return it->second;
}
Account Bank::WithDraw(float amount, long id)
{
    std::map<long, Account>::iterator it = mp.find(id);
    float sum = it->second.GetBalance() - amount;
    it->second.SetBalance(sum);
    return it->second;
}
Account Bank::FindAccount(long id)
{
    std::map<long, Account>::iterator it;
    it = mp.find(id);
    return it->second;
}
void Bank::DeleteAccount(long id)
{
    mp.erase(id);
}
void Bank::ViewAccounts()
{
    std::map<long, Account>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        std::cout<<it->second<<std::endl;
    }
}
Bank::~Bank()
{
    std::ofstream ofs("Banks.txt");
    std::map<long, Account>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        ofs << it->second << std::endl;
    }

    ofs.close();
}
