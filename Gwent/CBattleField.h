//
//  CBattleField.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CBattleField_h
#define CBattleField_h

#include "IDeck.h"

#ifndef TEST_FRIENDS
#define TEST_FRIENDS
#endif

class CBattleField:
    public IDeck
{
    TEST_FRIENDS
public:
    CBattleField();
    ~CBattleField();
    void EnDeck(ICard* ptrCard);
    int GetTotalStrength();
    void SetHorn(Tier tRow, bool bStatus);
    void SetWeather(Tier tRow, bool bStatus);
    
private:
    int CheckoutStrengthByTier(Tier tRow);
    void CheckoutTotalStrength();
    
private:
    bool m_onHorn[BATTLE_FIELD_RANGE];
    bool m_onWeather[BATTLE_FIELD_RANGE];
    //strength checkout order:
    //1 weather
    //2 ability
    //3 horn
    int m_totalStrength;
    std::vector<std::list<ICard*>> m_vecBattleField;
};

#endif /* CBattleField_h */
