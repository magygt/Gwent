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
    
private:
    bool m_onHorn[BATTLE_FIELD_RANGE];
    bool m_onWeather[BATTLE_FIELD_RANGE];
    int m_totalStrength;
    std::vector<std::list<ICard*>> m_vecBattleField;
};

#endif /* CBattleField_h */

