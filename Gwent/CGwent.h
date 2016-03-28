//
//  CGwent.h
//  Gwent
//
//  Created by Magygt on 3/26/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CGwent_h
#define CGwent_h

#include "CPlayer.h"


enum PlayerPostion
{
    TOP,
    BOTTOM
};

class CGwent{
    
public:
    CGwent();
    ~CGwent();
    
private:
    PlayerPostion m_turn;
    int m_score[PLAYER_NUM];
    CPlayer* m_player[PLAYER_NUM];
};

#endif /* CGwent_h */

