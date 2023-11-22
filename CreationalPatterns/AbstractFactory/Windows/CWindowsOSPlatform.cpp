//
//  CWindowsOSPlatform.cpp
//  Implements Windows OS platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include "CWindowsOSPlatform.h"
#include "CWindowsOSMemoryImplementation.h"
#include "CWindowsOSCPUImplementation.h"
#include <unistd.h>
#include <iostream>
#include <memory>

// Implements constructor
CWindowsOSPlatform::CWindowsOSPlatform():IPlatformInterface() {
    std::cout << "Entering CWindowsOSPlatform constructor" << std::endl;
}

// Implements destructor
CWindowsOSPlatform::~CWindowsOSPlatform() {
    std::cout << "Entering CWindowsOSPlatform destructor" << std::endl;
}

SIMemoryManagementInterface CWindowsOSPlatform::createMemory() {
    std::cout << "Entering CWindowsOSPlatform::createMemory" << std::endl;
    return std::make_shared<CWindowsOSMemoryImplementation>();
}

SICPUManagementInterface CWindowsOSPlatform::createCPU() {
    std::cout << "Entering CWindowsOSPlatform::createCPU" << std::endl;
    return std::make_shared<CWindowsOSCPUImplementation>();
}
