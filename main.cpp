#include <iostream>
#include <filesystem>

#include "message/message.h"
#include "user/user.h"

namespace fs = std::filesystem;

int main (int argc, char* argv[])
{  
    Message oMessage1(argv[1]);
    User oUser(argv[2]);

    fs::permissions(argv[1], fs::perms::group_write | fs::perms::others_all, 
		    fs::perm_options::remove );
    
    fs::permissions(argv[2], fs::perms::group_write | fs::perms::others_all, 
		    fs::perm_options::remove );
    

    std::cout << oMessage1.getTextItem() << std::endl;
    std::cout << oMessage1.getReceiverItem() << std::endl;
    std::cout << oMessage1.getSenderItem() << std::endl;

    std::cout << oUser.getNameItem() << std::endl;
    std::cout << oUser.getLoginItem() << std::endl;
    std::cout << oUser.getPassItem() << std::endl;

    oMessage1.setTextItem("rewrittentextitem");
    oMessage1.setReceiverItem("rewrittenrecieveritem");
    oMessage1.setSenderItem("rewrittensenderitem");

    oUser.setNameItem("rewrittennameitem");
    oUser.setLoginItem("rewrittenloginitem");
    oUser.setPassItem("rewrittenpassitem");
    return 0;
}

