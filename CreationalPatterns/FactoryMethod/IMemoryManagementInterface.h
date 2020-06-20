//
//  IMemoryManagementInterface.h
//  Define interfaces required to implement memory management
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.

#ifndef IMEMORY_MANAGEMENT_INTERFACE_H
#define IMEMORY_MANAGEMENT_INTERFACE_H

class IMemoryManagementInterface
{
    // This interface defines interface required to implement memory management
    // for different platform like MacOS, Windows, Linux, VxWorks
    
    public:
    	// Virtual constructor to restrict class to behave as abstract
	IMemoryManagementInterface(){};

	// Virtual constructor to handle memory management where destructor of
	// derived call first to make sure deallocation happens gracefully
	virtual ~IMemoryManagementInterface(){};

	// Factory method
	virtual void performMemoryCleanup() = 0;
};
#endif
