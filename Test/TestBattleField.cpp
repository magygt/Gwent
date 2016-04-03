//
//  TestBattleField.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "gtest/gtest.h"
#include "TestBattleField.h"
#include "CBattleField.h"


class CTestBattleField:
    public ::testing::Test
{
protected:
    CTestBattleField()
    {
        
    }
    
    virtual ~CTestBattleField()
    {
        
    }
    
    virtual void SetUp()
    {
        
    }
    
    virtual void TearDown()
    {
        
    }
    
    bool* GetOnHorn()
    {
        return m_battleField.m_onHorn;
    }
    
    bool* GetOnWeather()
    {
        return m_battleField.m_onWeather;
    }
    
    int GetTotalStrength()
    {
        return m_battleField.m_totalStrength;
    }
    
public:
    CBattleField m_battleField;
};

TEST_F(CTestBattleField, ConstructorWorksOK)
{
    bool* bWeather = GetOnWeather();
    bool* bHorn = GetOnHorn();
    for (int _row = 0; _row != BATTLE_FIELD_RANGE; ++_row)
    {
        EXPECT_FALSE(bWeather[_row]);
        EXPECT_FALSE(bHorn[_row]);
    }
}
