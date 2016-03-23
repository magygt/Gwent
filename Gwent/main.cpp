//
//  main.cpp
//  Gwent
//
//  Created by Magygt on 3/1/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include <iostream>
#include "CardLoader.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Deck deckFull = CardLoader("./cards.data");
    //std::cout << deckFull.size() << std::endl;
    for (std::vector<ICard*>::iterator iter = deckFull.begin();
         iter != deckFull.end(); iter++)
    {
        std::cout << (*iter)->ToString() << std::endl;
    }
    
    std::cout << deckFull.size() << " cards finish" << std::endl;
    return 0;
}
