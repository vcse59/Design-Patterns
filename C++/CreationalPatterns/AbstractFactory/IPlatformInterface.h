//
//  IPlatformInterface.h
//  Define interfaces required for different platform
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef IPLATFORM_INTERFACE_H
#define IPLATFORM_INTERFACE_H

#include "IMemoryManagementInterface.h"
#include "ICPUManagementInterface.h"

class IPlatformInterface
{
    // This interface implements Factory method required for different platforms
    // like MacOS, Windows, Linux, VxWorks
    
    public:
        // Virtual constructor to restrict class to behave as abstract
        IPlatformInterface(){};

        // Virtual constructor to handle memory management where destructor of
        // derived call first to make sure deallocation happens gracefully
        virtual ~IPlatformInterface() {};

        // Factory method
        virtual SIMemoryManagementInterface createMemory() = 0;
        virtual SICPUManagementInterface createCPU() = 0;
};
                
typedef std::shared_ptr<IPlatformInterface> SIPlatformInterface;
#endif
