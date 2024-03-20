#include "message.h"

Message::Message(const char* filename) : mFilename(filename)
{
    readDataFromFile(mFilename);
}

Message::~Message()
{
    writeDataToFile(mFilename);
}

void Message::setTextItem(const std::string& text)
{
    mText = text;
}

void Message::setSenderItem(const std::string& sender)
{
    mSender = sender;
}

void Message::setReceiverItem(const std::string& receiver)
{
    mReceiver = receiver;
}

std::string Message::getTextItem() const
{
   return mText;
}

std::string Message::getSenderItem() const
{
   return mSender;
}

std::string Message::getReceiverItem() const
{
   return mReceiver;
}

void Message::readDataFromFile(const char* filename)
{
   std::fstream file = std::fstream(filename, std::ios::in | std::ios::out);
   if(file.is_open())
   {
      std::cout << "file is open for reading" << std::endl;
      std::getline(file, mText, '/');
      std::getline(file, mSender, '/');
      std::getline(file, mReceiver, '/');
      file.close();
   }
   else
   {
      std::cout << "could not open file for writing" << std::endl; 
   }
}

void Message::writeDataToFile(const char* filename)
{
    std::fstream file = std::fstream(filename, std::ios::in | std::ios::out);
    if(file.is_open())
    {
       std::cout << "file is open for writing" << std::endl;
       std::cout << mText << '/' << mSender << '/' << mReceiver << '/' << std::endl;
       file << mText << '/' << mSender << '/' << mReceiver << '/' << std::endl;
       file.close();
    }
    else
    {
       std::cout << "could not open file for writing" << std::endl; 
    }
}