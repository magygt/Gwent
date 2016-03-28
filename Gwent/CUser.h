//
//  CUser.h
//  Gwent
//
//  Created by Magygt on 3/26/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CUser_h
#define CUser_h

#include "CPlayer.h"

class CUser
{
public:
    CUser();
    ~CUser();
    
private:
    CPlayer* m_player;
    std::vector<CCardDeck> m_DeckSets;
};

#endif /* CUser_h */

