//
//  CBattleField.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CBattleField.h"

CBattleField::CBattleField()
    :m_OnHorn(false),
     m_OnWeather(false),
     m_TotalStrength(0)
{
    
}

CBattleField::~CBattleField()
{

}

void CBattleField::EnDeck(ICard *ptrCard)
{
    if (ptrCard)
    {
        m_BattleField.push_back(ptrCard);
    }
}
