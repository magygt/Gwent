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
    
    bool GetOnHorn()
    {
        return m_BattleField.m_OnHorn;
    }
    
    bool GetOnWeather()
    {
        return m_BattleField.m_OnWeather;
    }
    
    int GetTotalStrength()
    {
        return m_BattleField.m_TotalStrength;
    }
    
public:
    CBattleField m_BattleField;
};

TEST_F(CTestBattleField, ConstructorWorksOK)
{
    EXPECT_EQ(false, GetOnHorn());
}
