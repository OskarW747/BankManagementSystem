#include <iostream>
#include <stdlib.h>

using namespace std;

// Menusindex
#define MAIN_MENU       0
#define DEFAULT_MENU    0

int mode = DEFAULT_MENU;

void initializeProgram() {
    cout << "Bankmanagement System" << endl;
}

void menu(int& index) {
    switch (index) {
        case (MAIN_MENU):
            cout << "1) Withdraw" << endl;
            cout << "2) Deposit" << endl;
            
            
            break;
    }
}

int main()
{   
    initializeProgram();

    /* Main loop */
    while (true)
    {
        menu(mode);
    }
}