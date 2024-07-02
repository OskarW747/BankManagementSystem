#ifndef LOGIN_H
#define LOGIN_H

#include <fstream>
#include <string>

class LoginPage {
public:
    Login();
    void initialize();

    private:
        bool checkUsername();
        void load();
        std::string _usernamesFile = "usernames.txt";
};

#endif