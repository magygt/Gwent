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

#define PLAYER_NUM (2)

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
    PlayerPostion m_Turn;
    int m_Score[PLAYER_NUM];
    CPlayer* m_Player[PLAYER_NUM];
};

#endif /* CGwent_h */
