//
//  CMacOSPlatform.cpp
//  Implements Apple Mac OS platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include "CMacOSPlatform.h"
#include "CMacOSMemoryImplementation.h"
#include "CMacOSCPUImplementation.h"
#include <unistd.h>
#include <iostream>
#include <memory>

// Implements constructor
CMacOSPlatform::CMacOSPlatform():IPlatformInterface() {
    std::cout << "Entering CMacOSPlatform constructor" << std::endl;
}

// Implements destructor
CMacOSPlatform::~CMacOSPlatform() {
    std::cout << "Entering CMacOSPlatform destructor" << std::endl;
}

SIMemoryManagementInterface CMacOSPlatform::createMemory() {
    std::cout << "Entering CMacOSPlatform::createMemory" << std::endl;
    return std::make_shared<CMacOSMemoryImplementation>();
}

SICPUManagementInterface CMacOSPlatform::createCPU() {
    std::cout << "Entering CMacOSPlatform::createCPU" << std::endl;
    return std::make_shared<CMacOSCPUImplementation>();
}
