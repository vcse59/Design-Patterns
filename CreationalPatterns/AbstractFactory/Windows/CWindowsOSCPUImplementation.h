//
//  CWindowsOSCPUImplementation.h
//  Define Windows OS platform CPU implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef CWINDOWS_OS_CPU_IMPLEMENTATION_H
#define CWINDOWS_OS_CPU_IMPLEMENTATION_H

#include "../ICPUManagementInterface.h"

class CWindowsOSCPUImplementation: public ICPUManagementInterface 
{
    // This interface implements CPU operations required for Windows OS platform
    
    public:
    	// Defining constuctor to initialize class member variables 
	    CWindowsOSCPUImplementation();

    	// Defining destructor to perform cleanup
	    virtual ~CWindowsOSCPUImplementation();

    protected:
        // Factory method
        virtual void performCPUCleanup();
};
#endif
