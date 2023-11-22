//
//  main.cpp
//  Factory Method Implementation 
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include <string.h>
#include "CMacOSPlatform.h"
#include "CWindowsOSPlatform.h"
#include "CPlatformType.h"

int main(int argc, const char * argv[]) {

    if (argc < 2)
    {
        std::cout << "ERROR : Empty platform type is not supported" << std::endl;
        std::cout << "Usage : ./factoryDP <platform type(mac/windows)>" << std::endl;
        return -1;
    }

    PLATFORM_TYPE platformType = UNKNOWN;
    if (strcmp(argv[1], "mac") == 0)
    {
        platformType = MAC_OS;
    }
    else if (strcmp(argv[1], "windows") == 0)
    {
        platformType = WINDOWS_OS;
    }

    IPlatformInterface *lPlatformObject = nullptr;
    
    if (platformType == MAC_OS)
    {
        lPlatformObject  =  new CMacOSPlatform();
    }
    else if (platformType == WINDOWS_OS)
    {
        lPlatformObject  =  new CWindowsOSPlatform();
    }
    else
    {
        std::cout << "Invalid platform name...terminate the program" << std::endl;
    }

    if (lPlatformObject != nullptr)
    {
        IMemoryManagementInterface* lPlatformMemoryObject = lPlatformObject->createMemoryObject();
        lPlatformMemoryObject->performMemoryCleanup();
    }

    if (lPlatformObject != nullptr)
    {
        delete lPlatformObject;
    }
    lPlatformObject = nullptr;
    return 0;
}
