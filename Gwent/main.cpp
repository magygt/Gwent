//
//  main.cpp
//  Gwent
//
//  Created by Magygt on 3/1/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "CardLoader.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    CardLoader("./cards.data");
    
    return 0;
}
