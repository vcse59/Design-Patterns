//
//  CWindowsOSCPUImplementation.cpp
//  Implements Windows OS platform CPU implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include <iostream>
#include <unistd.h>
#include "CWindowsOSCPUImplementation.h"

// Implements constructor
CWindowsOSCPUImplementation::CWindowsOSCPUImplementation():ICPUManagementInterface() 
{
    std::cout << "Entering CWindowsOSCPUImplementation constructor" << std::endl;
}

// Implements destructor
CWindowsOSCPUImplementation::~CWindowsOSCPUImplementation()
{
    std::cout << "Entering CWindowsOSCPUImplementation destructor" << std::endl;
}
    
// Implements memory cleanup function
void CWindowsOSCPUImplementation::performCPUCleanup()
{
    std::cout << "Entering CWindowsOSCPUImplementation::performCPUCleanup" << std::endl;
}
