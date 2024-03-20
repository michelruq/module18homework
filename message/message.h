#pragma once

#include <string>
#include <fstream>
#include <iostream>

class Message
{
    private: 
       std::string mText;
       std::string mSender;
       std::string mReceiver;

       const char* mFilename;

       void readDataFromFile(const char* filename);
       void writeDataToFile(const char* filename);

    public:
       Message(const char* filename);
       ~Message();

       void setTextItem(const std::string& text);
       void setSenderItem(const std::string& sender);
       void setReceiverItem(const std::string& receiver);

       std::string getTextItem() const;
       std::string getSenderItem() const;
       std::string getReceiverItem() const;

};