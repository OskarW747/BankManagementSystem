#include "Account.h"
#include <iostream>
#include <fstream>

void Account::withdraw(int _amount)
{

    balance = balance - _amount;
}

void Account::deposit(int _amount)
{
    balance = balance + _amount;
}

void Account::load()
{
    std::ifstream saveFile ("save.txt");
    
    if (!saveFile.is_open()){
        std::cout << "Unable to open file" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(saveFile, line)){
        balance = stoi(line);
    }

    saveFile.close();
}

void Account::save()
{
    std::ofstream saveFile;
    saveFile.open("save.txt");
    saveFile << balance;
    saveFile.close();
}

// void Account::save(ofstream _saveFile){

//}