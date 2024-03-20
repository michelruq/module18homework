#include "user.h"

User::User(const char* filename) : mFilename(filename)
{
    readDataFromFile(mFilename);
}

User::~User()
{
    writeDataToFile(mFilename);
}

void User::setNameItem(const std::string& name)
{
    mName = name;
}

void User::setLoginItem(const std::string& login)
{
    mLogin = login;
}

void User::setPassItem(const std::string& pass)
{
    mPass = pass;
}

std::string User::getNameItem() const
{
   return mName;
}

std::string User::getLoginItem() const
{
   return mLogin;
}

std::string User::getPassItem() const
{
   return mPass;
}

void User::readDataFromFile(const char* filename)
{
   std::fstream file = std::fstream(filename, std::ios::in | std::ios::out);
   if(file.is_open())
   {
      std::cout << "file is open for reading" << std::endl;
      std::getline(file, mName, '/');
      std::getline(file, mLogin, '/');
      std::getline(file, mPass, '/');
      file.close();
   }
   else
   {
      std::cout << "could not open file for writing" << std::endl; 
   }
}

void User::writeDataToFile(const char* filename)
{
    std::fstream file = std::fstream(filename, std::ios::in | std::ios::out);
    if(file.is_open())
    {
       std::cout << "file is open for writing" << std::endl;
       std::cout << mName << '/' << mLogin << '/' << mPass << '/' << std::endl;
       file << mName << '/' << mLogin << '/' << mPass << '/' << std::endl;
       file.close();
    }
    else
    {
       std::cout << "could not open file for writing" << std::endl; 
    }
}