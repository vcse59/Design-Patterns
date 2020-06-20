//
//  CMacOSPlatform.cpp
//  Implements Apple Mac OS platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include <iostream>
#include <unistd.h>
#include "CMacOSPlatform.h"
#include "CMacOSMemoryImplementation.h"

// Implements constructor
CMacOSPlatform::CMacOSPlatform():IPlatformInterface()
{
    std::cout << "Entering CMacOSPlatform constructor" << std::endl;
    mMemoryMgmtObjectPtr = nullptr; 
}

// Implements destructor
CMacOSPlatform::~CMacOSPlatform()
{
    std::cout << "Entering CMacOSPlatform destructor" << std::endl;
    if (mMemoryMgmtObjectPtr != nullptr)
    {
        delete mMemoryMgmtObjectPtr;
    }
    mMemoryMgmtObjectPtr = nullptr;
}

// Create Memory object
IMemoryManagementInterface* CMacOSPlatform::createMemoryObject()
{
    std::cout << "Entering CMacOSPlatform::createMemoryObject" << std::endl;
    mMemoryMgmtObjectPtr = new  CMacOSMemoryImplementation();
    return mMemoryMgmtObjectPtr;
}
