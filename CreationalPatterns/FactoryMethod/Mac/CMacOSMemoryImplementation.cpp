//
//  CMacOSMemoryImplementation.cpp
//  ImplementsApple Mac OS platform memory implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#include <iostream>
#include <unistd.h>
#include "CMacOSMemoryImplementation.h"

// Implements constructor
CMacOSMemoryImplementation::CMacOSMemoryImplementation():IMemoryManagementInterface() 
{
    std::cout << "Entering CMacOSMemoryImplementation constructor" << std::endl;
}

// Implements destructor
CMacOSMemoryImplementation::~CMacOSMemoryImplementation()
{
    std::cout << "Entering CMacOSMemoryImplementation destructor" << std::endl;
}
    
// Implements memory cleanup function
void CMacOSMemoryImplementation::performMemoryCleanup()
{
    std::cout << "Entering CMacOSMemoryImplementation::performMemoryCleanup" << std::endl;
}
