//
//  CBattleField.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CBattleField_h
#define CBattleField_h

#include "ICard.h"

#ifndef TEST_FRIENDS
#define TEST_FRIENDS
#endif

#define BATTLE_FIELD_RANGE      (3)

typedef std::vector<ICard*> BattleRow;

void CleanBattleField(BattleRow& br);

class CBattleField
{
    TEST_FRIENDS
    friend void CleanBattleField(BattleRow& br);
public:
    CBattleField();
    ~CBattleField();
    
private:
    int m_TotalStrength;
    BattleRow m_BattleField[BATTLE_FIELD_RANGE];
    
    bool m_OnDouble[BATTLE_FIELD_RANGE];
    bool m_OnWeather[BATTLE_FIELD_RANGE];
};

#endif /* CBattleField_h */
