#include "Account.h"
#include <iostream>
#include <fstream>

void Account::withdraw(int _amount) {

    balance = balance - _amount;

}

void Account::deposit(int _amount){
    balance = balance + _amount;
}

//void Account::save(ofstream _saveFile){
    
//}