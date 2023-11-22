//
//  CWindowsOSPlatform.h
//  Define Windows OS platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef CWINDOW_OS_PLATFORM_H
#define CWINDOW_OS_PLATFORM_H

#include "../IPlatformInterface.h"

class CWindowsOSPlatform: public IPlatformInterface
{
    // This interface implements Factory method required for windows platform
    
    public:
        // Defining constuctor to initialize class member variables 
        CWindowsOSPlatform();

        // Defining destructor to perform cleanup
        virtual ~CWindowsOSPlatform();

    protected:
        // Factory method
        virtual SIMemoryManagementInterface createMemory();
        virtual SICPUManagementInterface createCPU();
};
#endif
