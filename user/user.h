#pragma once

#include <string>
#include <fstream>
#include <iostream>

class User
{
    private: 
       std::string mName;
       std::string mLogin;
       std::string mPass;

       const char* mFilename;

       void readDataFromFile(const char* filename);
       void writeDataToFile(const char* filename);

    public:
       User(const char* filename);
       ~User();

       void setNameItem(const std::string& name);
       void setLoginItem(const std::string& login);
       void setPassItem(const std::string& receiver);

       std::string getNameItem() const;
       std::string getLoginItem() const;
       std::string getPassItem() const;

};