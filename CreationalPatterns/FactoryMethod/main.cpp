//
//  main.cpp
//  Factory Method Implementation 
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include "CMacOSPlatform.h"
#include "CWindowsOSPlatform.h"
#include "CPlatformEnum.h"

int main(int argc, const char * argv[]) {

    //PLATFORM_NAME platformName = WINDOWS_OS;
    PLATFORM_NAME platformName = MAC_OS;

    IPlatformInterface *lPlatformObject = nullptr;
    
    if (platformName == MAC_OS)
    {
    	lPlatformObject  =  new CMacOSPlatform();
    }
    else if (platformName == WINDOWS_OS)
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
