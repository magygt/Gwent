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
    m_Battlefield = new CBattleField();
}

CPlayer::~CPlayer()
{
    delete m_Battlefield;
    m_Battlefield = NULL;
}