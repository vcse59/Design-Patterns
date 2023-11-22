//
//  CMacOSCPUImplementation.cpp
//  ImplementsApple Mac OS platform CPU implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include "CMacOSCPUImplementation.h"
#include <unistd.h>
#include <iostream>

// Implements constructor
CMacOSCPUImplementation::CMacOSCPUImplementation():ICPUManagementInterface() {
    std::cout << "Entering CMacOSCPUImplementation constructor" << std::endl;
}

// Implements destructor
CMacOSCPUImplementation::~CMacOSCPUImplementation() {
    std::cout << "Entering CMacOSCPUImplementation destructor" << std::endl;
}

// Implements memory cleanup function
void CMacOSCPUImplementation::performCPUCleanup() {
    std::cout << "Entering CMacOSCPUImplementation::performCPUCleanup"
        << std::endl;
}
