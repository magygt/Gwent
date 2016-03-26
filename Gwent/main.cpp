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
    
    CCardDeck deckFull = CardLoader("./cards.data");
    //std::cout << deckFull.size() << std::endl;
    std::vector<std::string> vecCard = deckFull.DeckTraverse();
    for (std::vector<std::string>::iterator iter = vecCard.begin();
         iter != vecCard.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }
    return 0;
}
