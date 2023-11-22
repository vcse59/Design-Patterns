//
//  ICPUManagementInterface.h
//  Define interfaces required to implement CPU management
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef ICPU_MANAGEMENT_INTERFACE_H
#define ICPU_MANAGEMENT_INTERFACE_H

#include <memory>

class ICPUManagementInterface
{
    // This interface defines interface required to implement CPU management
    // for different platform like MacOS, Windows, Linux, VxWorks
    
    public:
        // Virtual constructor to restrict class to behave as abstract
        ICPUManagementInterface(){};

        // Virtual constructor to handle CPU management where destructor of
        // derived call first to make sure deallocation happens gracefully
        virtual ~ICPUManagementInterface(){};

        // Factory method
        virtual void performCPUCleanup() = 0;
};

typedef std::shared_ptr<ICPUManagementInterface> SICPUManagementInterface;

#endif
