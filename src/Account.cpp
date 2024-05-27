#include "Account.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdint>

void Account::withdraw(int _amount)
{

    _balance = _balance - _amount;
}

void Account::deposit(int _amount)
{
    _balance = _balance + _amount;
}

void Account::load()
{
    std::ifstream saveFile (_name + "save.txt");
    
    if (!saveFile.is_open()){
        std::cout << "Unable to open file" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(saveFile, line)){
        _balance = stoi(line);
    }

    saveFile.close();
}

void Account::save()
{
    std::ofstream saveFile;
    saveFile.open(_name + "save.txt");
    saveFile << _balance;
    saveFile.close();
}

// void Account::save(ofstream _saveFile){

//}