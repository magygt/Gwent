//
//  CBattleField.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CBattleField.h"

CBattleField::CBattleField()
    :m_onHorn(false),
     m_onWeather(false),
     m_totalStrength(0)
{
    
}

CBattleField::~CBattleField()
{

}

void CBattleField::EnDeck(ICard *ptrCard)
{
    if (ptrCard)
    {
        m_battleField.push_back(ptrCard);
    }
}

