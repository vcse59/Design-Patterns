//
//  CMacOSPlatform.h
//  Define Apple Mac OS platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef CMAC_OS_PLATFORM_H
#define CMAC_OS_PLATFORM_H

#include "../IPlatformInterface.h"

class CMacOSPlatform: public IPlatformInterface
{
    // This interface implements Factory method required for Mac OS platform
    
    public:
        // Defining constuctor to initialize class member variables 
        CMacOSPlatform();

        // Defining destructor to perform cleanup
        virtual ~CMacOSPlatform();

    protected:
        // Factory method
        virtual SIMemoryManagementInterface createMemory();
        virtual SICPUManagementInterface createCPU();
};
#endif
