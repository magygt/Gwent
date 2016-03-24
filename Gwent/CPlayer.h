//
//  CPlayer.h
//  Gwent
//
//  Created by Magygt on 3/20/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CPlayer_h
#define CPlayer_h

#include "CBattleField.h"

typedef std::vector<ICard> CardDeck;

class CPlayer
{
    TEST_FRIENDS
    
public:
    CPlayer();
    ~CPlayer();
    
    void OnBoard(ICard* card);
    
private:
    CBattleField* m_Battlefield;
    HandCard m_HandCard;
    Deck m_Discard;
    
};


#endif /* CPlayer_h */
