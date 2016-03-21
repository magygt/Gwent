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
private:
    CBattleField* m_Battlefield;
    CardDeck m_HandCard;
    CardDeck m_Discard;
    
public:
    CPlayer();
    ~CPlayer();
    
};


#endif /* CPlayer_h */
