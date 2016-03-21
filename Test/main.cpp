//
//  main.cpp
//  Test
//
//  Created by Magygt on 3/1/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "gtest/gtest.h"


int main(int argc, char * argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}