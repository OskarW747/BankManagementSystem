#include "Login.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdint>



using namespace std;

void LoginPage::initialize() {

}

void LoginPage::load() {

}

bool LoginPage::checkUsername()
{
    cout << "-----------------------------" << endl;
    cout << "         Login Page" << endl;
    cout << "-----------------------------" << endl;
    cout << "Enter username: ";

    std::string _input;
    std::getline(cin, _input);

    std::ifstream usernamesFile(_usernamesFile);

    if (!usernamesFile.is_open()) {
        std::cout << "Unable to open file!" << std::endl;
        return;
    }

    std::string _line;
    while (std::getline(usernamesFile, _line)) {
        if (_input == _line) {
            std::cout << "Username identification is successful! " << "Username: " << _line << std::endl;
            return true;
        }
        else {
            std::cout << "Username input: " << _line << " Tested username: " << _line << endl;
        }
    }
    std::cout << "Username identification completed unsuccessfully" << std::endl;

}