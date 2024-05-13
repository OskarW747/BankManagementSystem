#include <iostream>
#include <string>
#include <stdlib.h>
#include "Account.h"

using namespace std;

#define MAIN_MENU_INDEX 0
#define OPTION_MENU_INDEX 1
#define WITHDRAW_MENU_INDEX 2
#define DEPOSIT_MENU_INDEX 3

string input;
uint8_t menuIndex = MAIN_MENU_INDEX;
bool loop = true;

Account account;

void initializeProgram()
{
    cout << "Bankmanagement System" << endl;
}

void mainMenu(Account *account)
{
    system("CLS");
    cout << "-----------------------------" << endl;
    cout << "          MAIN MENU" << endl;
    cout << "-----------------------------" << endl;
    cout << "\nBalance: " << account->balance << endl;
    cout << "1) Withdraw" << endl;
    cout << "2) Deposit" << endl;
    cout << "3) Quit" << endl;

    string _input;
    getline(cin, _input);
    uint8_t _inputInt = stoi(_input);

    switch (_inputInt)
    {
    case (1):
        menuIndex = WITHDRAW_MENU_INDEX;
        break;
    case (2):
        menuIndex = DEPOSIT_MENU_INDEX;
        break;
    case (3):
        loop = false;
        break;
    }
}

void withdrawMenu(Account *account)
{
    system("CLS");
    cout << "-----------------------------" << endl;
    cout << "        Withdraw Menu" << endl;
    cout << "-----------------------------" << endl;
    cout << "\nBalance: " << account->balance << endl;
    cout << "Enter withdraw amount or type back to go back: ";

    string _input;
    getline(cin, _input);

    if (_input == "back")
    {
        menuIndex = MAIN_MENU_INDEX;
    }
    else
    {
        try
        {
            uint8_t _inputInt = stoi(_input);
            account->withdraw(_inputInt);
        }
        catch (const std::exception &e)
        {
            cout << "Invalid input. Please enter a valid amount or type back to go back" << endl;
        }
    }
}

void depositMenu(Account *account)
{
    system("CLS");
    cout << "-----------------------------" << endl;
    cout << "        Deposit Menu" << endl;
    cout << "-----------------------------" << endl;
    cout << "\nBalance: " << account->balance << endl;
    cout << "Enter deposit amount or type back to go back: ";

    string _input;
    getline(cin, _input);

    if (_input == "back")
    {
        menuIndex = MAIN_MENU_INDEX;
    }
    else
    {
        try
        {
            uint8_t _inputInt = stoi(_input);
            account->deposit(_inputInt);
        }
        catch (const std::exception &e)
        {
            cout << "Invalid input. Please enter a valid amount or type back to go back" << endl;
        }
    }
}

void menuController(string _input, uint8_t _menuIndex)
{
    switch (_menuIndex)
    {
    case (MAIN_MENU_INDEX):
        mainMenu(&account);
        break;
    case (WITHDRAW_MENU_INDEX):
        withdrawMenu(&account);
        break;
    case (DEPOSIT_MENU_INDEX):
        depositMenu(&account);
        break;
    }
}

int main()
{
    initializeProgram();

    /* Main loop */
    while (loop == true)
    {
        cout << "MainLoop" << endl;
        /* Do logic */

        // Terminate program if input == quit
        if (input == "quit")
        {
            break;
        }

        menuController(input, menuIndex);

        /* Set output */
    }

    cout << "\nExiting program" << endl;
    return 0;
}
