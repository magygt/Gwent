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

// 1 pop this card from handdeck
// 2 push back to battlefield
void CPlayer::OnBoard(ICard* card)
{
    
}
