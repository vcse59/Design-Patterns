//
//  CWindowsOSPlatform.cpp
//  Implements Windows OS platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include <iostream>
#include <unistd.h>
#include "CWindowsOSPlatform.h"
#include "CWindowsOSMemoryImplementation.h"

// Implements constructor
CWindowsOSPlatform::CWindowsOSPlatform():IPlatformInterface()
{
    std::cout << "Entering CWindowsOSPlatform constructor" << std::endl;
    mMemoryMgmtObjectPtr = nullptr; 
}

// Implements destructor
CWindowsOSPlatform::~CWindowsOSPlatform()
{
    std::cout << "Entering CWindowsOSPlatform destructor" << std::endl;
    if (mMemoryMgmtObjectPtr != nullptr)
    {
        delete mMemoryMgmtObjectPtr;
    }
    mMemoryMgmtObjectPtr = nullptr;
}

// Create Memory object
IMemoryManagementInterface* CWindowsOSPlatform::createMemoryObject()
{
    std::cout << "Entering CWindowsOSPlatform::createMemoryObject" << std::endl;
    mMemoryMgmtObjectPtr = new  CWindowsOSMemoryImplementation();
    return mMemoryMgmtObjectPtr;
}
