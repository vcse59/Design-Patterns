#ifndef __PLATFOMR_H__
#define __PLATFOMR_H__

#include <memory>
#include "IPlatformInterface.h"

class Platform
{
    public:
        void setUpPlatform(SIPlatformInterface platformInterface)
        {
            platformInterface->createMemory();
            platformInterface->createCPU();
        }
};

typedef std::shared_ptr<Platform> SPlatform;

#endif