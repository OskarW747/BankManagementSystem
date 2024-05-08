#include <iostream>

using namespace std;

#define MAIN_MENU_INDEX     0
#define OPTION_MENU_INDEX   1

string mainMenu[3] = {"Withdraw", "Deposit", "Quit"};
string optionMenu[3] = {"1", "2", "Back"};

const uint8_t mainMenuSize = 3;
const uint8_t optionMenuSize = 3;

string input;
uint8_t menuIndex;

void printMenu(string* menu, uint8_t size);
void menuController();

void initializeProgram()
{
    cout << "Bankmanagement System" << endl;
}

int main()
{
    initializeProgram();
    printMenu(mainMenu, mainMenuSize);

    /* Main loop */
    while (true){

        /* Get input */
        input = cin.get();

        /* Do logic */
        
        
        /* Set output */
        menuController();
    }
    
    cin.get();
    
}

void menuController() {
    switch (menuIndex) {
        case (MAIN_MENU_INDEX):
            printMenu(mainMenu, mainMenuSize);
            break;
        case (OPTION_MENU_INDEX):
            printMenu(optionMenu, optionMenuSize);
            break;
    }
}

void printMenu(string* menu, uint8_t size)
{
    cout << "\n";
    for (int i = 0; i < size; i++) {
        cout << i << ") " << menu[i] << endl;
    }

    cout << "Choose your alternative: ";
}