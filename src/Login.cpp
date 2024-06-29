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

void LoginPage::print()
{
    cout << "-----------------------------" << endl;
    cout << "         Login Page" << endl;
    cout << "-----------------------------" << endl;
    cout << "Enter username: ";

    string _input;
    getline(cin, _input);

}