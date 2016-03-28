//
//  CPlayer.h
//  Gwent
//
//  Created by Magygt on 3/20/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CPlayer_h
#define CPlayer_h

#include "CUnitCard.h"
#include "CSpecialCard.h"
#include "CCardDeck.h"
#include "CBattleField.h"
#include "CLeader.h"


class CPlayer
{
    TEST_FRIENDS
    
public:
    CPlayer();
    ~CPlayer();
    
private:
    //leader
    CLeader m_leader;
    CCardDeck m_deckSet;
    CCardDeck m_discard;
    CCardDeck m_handDeck;
    std::vector<CBattleField*> m_vecBattleField;
};

#endif /* CPlayer_h */

