#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <fstream>

class Account
{
public:
    Account(std::string name) : _name(name), _balance(0){};
    void withdraw(int _amount);
    void deposit(int _amount);
    void save();
    void load();
    int getBalance() const { return _balance; }

private:
    unsigned int _balance;
    std::string _name;

    // ofstream _saveFile;
};

#endif