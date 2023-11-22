//
//  CMacOSCPUImplementation.h
//  Define Apple Mac OS platform CPU implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef CMAC_OS_CPU_IMPLEMENTATION_H
#define CMAC_OS_CPU_IMPLEMENTATION_H

#include "../ICPUManagementInterface.h"

class CMacOSCPUImplementation: public ICPUManagementInterface 
{
    // This interface implements CPU operations required for Mac OS platform
    
    public:
        // Defining constuctor to initialize class member variables 
        CMacOSCPUImplementation();

        // Defining destructor to perform cleanup
        virtual ~CMacOSCPUImplementation();

    protected:
        // Factory method
        virtual void performCPUCleanup();
};
#endif
