//
//  main.cpp
//  Factory Method Implementation
//
//  Created by Vivek Yadav on 06/19/20.
//  Copyright © 2020 Vivek Yadav. All rights reserved.
//

#include "CMacOSPlatform.h"
#include "CWindowsOSPlatform.h"
#include "CPlatformType.h"
#include "IPlatformInterface.h"
#include "Platform.h"
#include <unistd.h>
#include <string.h>
#include <iostream>

int main(int argc, const char * argv[]) {
    if (argc < 2) {
        std::cout << "ERROR : Empty platform type is not supported"
            << std::endl;
        std::cout << "Usage : ./factoryDP <platform type(mac/windows)>"
            << std::endl;
        return -1;
    }

    PLATFORM_TYPE platformType = UNKNOWN;
    if (strcasecmp(argv[1], "mac") == 0) {
        platformType = MAC_OS;
    } else if (strcasecmp(argv[1], "windows") == 0) {
        platformType = WINDOWS_OS;
    } else {
        std::cout << "ERROR : Invalid platform name" << std::endl;
        return -1;
    }

    SIPlatformInterface lPlatformObject;

    if (platformType == MAC_OS) {
        lPlatformObject  =  std::make_shared<CMacOSPlatform>();
    } else if (platformType == WINDOWS_OS) {
        lPlatformObject  =  std::make_shared<CWindowsOSPlatform>();
    } else {
    }

    if (lPlatformObject != nullptr) {
        SPlatform platform = std::make_shared<Platform>();
        platform->setUpPlatform(lPlatformObject);
    }
    return 0;
}
