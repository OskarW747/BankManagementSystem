#ifndef LOGIN_H
#define LOGIN_H

#include <fstream>
#include <string>

class LoginPage {
public:
    LoginPage();
    void initialize();
    bool checkUsername();

    private:
        
        void load();
        std::string _usernamesFile = "usernames.txt";
};

#endif