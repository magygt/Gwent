//
//  CPlayer.cpp
//  Gwent
//
//  Created by Magygt on 3/20/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CPlayer.h"

CPlayer::CPlayer()
{
    CBattleField* pBattleField = NULL;
    for (int i = 0; i != BATTLE_FIELD_RANGE; i++) {
        pBattleField = new CBattleField;
        m_vecBattleField.push_back(pBattleField);
        pBattleField = NULL;
    }
}

CPlayer::~CPlayer()
{
    
}

