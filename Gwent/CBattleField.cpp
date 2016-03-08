//
//  CBattleField.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CBattleField.h"

void CleanBattleField(BattleRow& br)
{
    BattleRow::iterator iter;
    for (iter = br.begin(); iter != br.end(); iter++)
    {
        delete *iter;
        *iter = NULL;
    }
}

CBattleField::CBattleField()
    :m_TotalStrength(0)
{
    for (int i = 0; i != BATTLE_FIELD_RANGE; i++)
    {
        m_OnDouble[i] = false;
        m_OnWeather[i] = false;
    }
}

CBattleField::~CBattleField()
{
    CleanBattleField(m_CloseCombat);
    CleanBattleField(m_RangedCombat);
    CleanBattleField(m_SiegeCombat);
}


