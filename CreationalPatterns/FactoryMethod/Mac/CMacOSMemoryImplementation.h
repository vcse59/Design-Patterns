//
//  CMacOSMemoryImplementation.h
//  Define Apple Mac OS platform memory implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef CMAC_OS_MEMORY_IMPLEMENTATION_H
#define CMAC_OS_MEMORY_IMPLEMENTATION_H

#include "../IMemoryManagementInterface.h"

class CMacOSMemoryImplementation: public IMemoryManagementInterface 
{
    // This interface implements memory operations required for Mac OS platform
    
    public:
    	// Defining constuctor to initialize class member variables 
	CMacOSMemoryImplementation();

    	// Defining destructor to perform cleanup
	virtual ~CMacOSMemoryImplementation();

    protected:
	// Factory method
	virtual void performMemoryCleanup();
};
#endif
