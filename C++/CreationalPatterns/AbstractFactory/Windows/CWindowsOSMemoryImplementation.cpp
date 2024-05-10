//
//  CWindowsOSMemoryImplementation.cpp
//  ImplementsApple OS platform memory implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include "CWindowsOSMemoryImplementation.h"
#include <unistd.h>
#include <iostream>

// Implements constructor
CWindowsOSMemoryImplementation::CWindowsOSMemoryImplementation()
    :IMemoryManagementInterface() {
    std::cout << "Entering CWindowsOSMemoryImplementation constructor"
         << std::endl;
}

// Implements destructor
CWindowsOSMemoryImplementation::~CWindowsOSMemoryImplementation() {
    std::cout << "Entering CWindowsOSMemoryImplementation destructor"
         << std::endl;
}

// Implements memory cleanup function
void CWindowsOSMemoryImplementation::performMemoryCleanup() {
    std::cout << "Entering CWindowsOSMemoryImplementation::performMemoryCleanup"
         << std::endl;
}
