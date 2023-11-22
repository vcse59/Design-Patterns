//
//  CWindowsOSMemoryImplementation.h
//  Define Windows OS platform memory implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef CWINDOWS_OS_MEMORY_IMPLEMENTATION_H
#define CWINDOWS_OS_MEMORY_IMPLEMENTATION_H

#include "../IMemoryManagementInterface.h"

class CWindowsOSMemoryImplementation: public IMemoryManagementInterface 
{
    // This interface implements memory operations required for Windows OS platform
    
    public:
    	// Defining constuctor to initialize class member variables 
	CWindowsOSMemoryImplementation();

    	// Defining destructor to perform cleanup
	virtual ~CWindowsOSMemoryImplementation();

    protected:
	// Factory method
	virtual void performMemoryCleanup();
};
#endif
