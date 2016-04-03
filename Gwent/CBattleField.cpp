//
//  CBattleField.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CBattleField.h"

CBattleField::CBattleField()
    :m_totalStrength(0)
{
    std::list<ICard*> listCard;
    for (int _row = 0; _row != BATTLE_FIELD_RANGE; _row++)
    {
        m_onHorn[_row] = false;
        m_onWeather[_row] = false;
        m_vecBattleField.push_back(listCard);
    }
}

CBattleField::~CBattleField()
{

}

void CBattleField::EnDeck(ICard *ptrCard)
{
}

