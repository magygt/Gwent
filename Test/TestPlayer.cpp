//
//  TestPlayer.cpp
//  Gwent
//
//  Created by Magygt on 3/20/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "gtest/gtest.h"
#include "TestPlayer.h"
#include "CPlayer.h"

class CTestPlayer:
public ::testing::Test
{
protected:
    CTestPlayer()
    {
        
    }
    
    virtual ~CTestPlayer()
    {
        
    }
    
    virtual void SetUp()
    {
        
    }
    
    virtual void TearDown()
    {
        
    }
    
    std::vector<CBattleField*> GetBattleField()
    {
        return m_Player.m_vecBattleField;
    }
public:
    CPlayer m_Player;
};

TEST_F(CTestPlayer, ConstructorWorksOK)
{
    std::vector<CBattleField*> battleField = GetBattleField();
    EXPECT_EQ(BATTLE_FIELD_RANGE, battleField.size());
    
}
