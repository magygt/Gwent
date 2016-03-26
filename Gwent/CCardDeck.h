//
//  CCardDeck.h
//  Gwent
//
//  Created by Magygt on 3/25/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CCardDeck_h
#define CCardDeck_h

#include "IDeck.h"
#include <list>

class CCardDeck
    :public IDeck
{
public:
    CCardDeck();
    ~CCardDeck();
    void EnDeck(ICard* ptrCard);
    
    ICard* At(int nIndex);
    size_t Size();
    std::vector<std::string> DeckTraverse();
    void SortByFaction();
    void SortByStrength();
    void SortByAbility();
    
private:
    std::list<ICard*> m_CardDeck;
    
};
#endif /* CCardDeck_h */
