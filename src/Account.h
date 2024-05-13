#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <fstream>

class Account {
    public:
        void withdraw(int amount);
        void deposit(int amount);
        void save();

        int balance = 100;

    private:
        int _amount;

        //ofstream _saveFile;
};

#endif