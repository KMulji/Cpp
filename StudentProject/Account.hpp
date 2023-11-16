// account.h
#ifndef Account_H // include guard
#define Account_H
#include <string>
#include <fstream>
class Account
{
private:
    long Id;
    static long NextId;
    std::string FName;
    std::string LName;
    float Balance;

public:
    Account(){};
    Account(std::string Fname, std::string Lname, float Balance);
    std::string GetName() { return this->FName + " " + this->LName; };
    float GetBalance() { return this->Balance; };
    void SetBalance(float amount) { this->Balance = amount; };
    int GetId() { return this->Id; };
    void SetId(int id2) { this->Id = id2; };
    static long GetNextId() { return NextId; };
    static void SetNextId(long id2) { NextId = id2; };
    friend std::ofstream &operator<<(std::ofstream &ofs, Account &a);
    friend std::ifstream &operator>>(std::ifstream &ifs, Account &a);
    friend std::ostream &operator<<(std::ostream &os, Account &a);
};


#endif /* MY_CLASS_H */
