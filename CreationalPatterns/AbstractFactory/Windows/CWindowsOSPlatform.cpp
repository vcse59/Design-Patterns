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
#include "CWindowsOSCPUImplementation.h"

// Implements constructor
CWindowsOSPlatform::CWindowsOSPlatform():IPlatformInterface()
{
    std::cout << "Entering CWindowsOSPlatform constructor" << std::endl;
}

// Implements destructor
CWindowsOSPlatform::~CWindowsOSPlatform()
{
    std::cout << "Entering CWindowsOSPlatform destructor" << std::endl;
}

SIMemoryManagementInterface CWindowsOSPlatform::createMemory()
{
    std::cout << "Entering CWindowsOSPlatform::createMemory" << std::endl;
    return std::make_shared<CWindowsOSMemoryImplementation>();
}

SICPUManagementInterface CWindowsOSPlatform::createCPU()
{
    std::cout << "Entering CWindowsOSPlatform::createCPU" << std::endl;
    return std::make_shared<CWindowsOSCPUImplementation>();
}
