//
//  CBattleField.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CBattleField.h"
#include "CUnitCard.h"

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

void CBattleField::EnDeck(ICard* ptrCard)
{
    m_vecBattleField[((CUnitCard*)ptrCard)->GetTier()].push_back(ptrCard);
}


int CBattleField::GetTotalStrength()
{
    CheckoutTotalStrength();
    return m_totalStrength;
}

void CBattleField::SetHorn(Tier tRow, bool bStatus)
{
    m_onHorn[tRow] = bStatus;
}

void CBattleField::SetWeather(Tier tRow, bool bStatus)
{
    m_onWeather[tRow] = bStatus;
}

int CBattleField::CheckoutStrengthByTier(Tier tRow)
{
    int nStrength = 0;
    CUnitCard* pUnitCard = NULL;
    if (m_onWeather[tRow])
    {
        nStrength = m_vecBattleField[tRow].size();
    }
    else
    {
        for (std::list<ICard*>::const_iterator citer = m_vecBattleField[tRow].begin();
             citer != m_vecBattleField[tRow].end(); ++citer)
        {
            pUnitCard = (CUnitCard*)(*citer);
            nStrength += pUnitCard->GetStrength();
        }
    }
    //checkout abilities
    if (m_onHorn[tRow]) {
        nStrength *= 2;
    }
    return nStrength;
}

void CBattleField::CheckoutTotalStrength()
{
    int nStrength = 0;
    for (int _row = 0; _row != BATTLE_FIELD_RANGE; ++_row)
    {
        nStrength += CheckoutStrengthByTier(CUnitCard::vecTier[_row]);
    }
    m_totalStrength = nStrength;
}


