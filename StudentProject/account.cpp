#include "Account.hpp"
#include <iostream>

Account::Account(std::string FName, std::string LName, float Balance)
{
    this->Id=NextId;
    NextId++;
    this->FName = FName;
    this->LName = LName;
    this->Balance = Balance;
}
std::ofstream &operator<<(std::ofstream &ofs, Account &a)
{
    ofs << a.Id << std::endl;
    ofs << a.FName << std::endl;
    ofs << a.LName << std::endl;
    ofs << a.Balance << std::endl;
    return ofs;
}
std::ifstream &operator>>(std::ifstream &ifs, Account &a)
{
    ifs >> a.Id;
    ifs >> a.FName;
    ifs >> a.LName;
    ifs >> a.Balance;

    return ifs;
}
std::ostream &operator<<(std::ostream &os, Account &a)
{
    os << a.Id << std::endl;
    os << a.FName + " " + a.LName << std::endl;
    os << a.Balance << std::endl;

    return os;
}