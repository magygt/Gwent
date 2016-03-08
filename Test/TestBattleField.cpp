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
    
    int GetTotalStrength()
    {
        return m_BattleField.m_TotalStrength;
    }
    
    bool* GetOnWeather()
    {
        return m_BattleField.m_OnWeather;
    }
    
    bool* GetOnDouble()
    {
        return m_BattleField.m_OnDouble;
    }
    
public:
    CBattleField m_BattleField;
};

TEST_F(CTestBattleField, ConstructorWorksOK)
{
    int nStrength = GetTotalStrength();
    EXPECT_EQ(0, nStrength);
    for (int i = 0; i != BATTLE_FIELD_RANGE; ++i)
    {
        EXPECT_FALSE(GetOnDouble()[i]);
        EXPECT_FALSE(GetOnWeather()[i]);
    }
}
