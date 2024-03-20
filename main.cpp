#include <iostream>

#include "message.h"
#include "user.h"

int main (int argc, char* argv[])
{  
    Message oMessage1(argv[1]);
    User oUser(argv[2]);
    
    std::cout << oMessage1.getTextItem() << std::endl;
    std::cout << oMessage1.getReceiverItem() << std::endl;
    std::cout << oMessage1.getSenderItem() << std::endl;

    std::cout << oUser.getNameItem() << std::endl;
    std::cout << oUser.getLoginItem() << std::endl;
    std::cout << oUser.getPassItem() << std::endl;

    oMessage1.setTextItem("It is everything ok");
    oMessage1.setReceiverItem("mike");
    oMessage1.setSenderItem("queen");

    oUser.setNameItem("miss");
    oUser.setLoginItem("queen");
    oUser.setPassItem("lucky day");
    return 0;
}