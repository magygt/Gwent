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
    
    CBattleField* GetBattleField()
    {
        return m_Player.m_Battlefield;
    }
    
public:
    CPlayer m_Player;
};

TEST_F(CTestPlayer, ConstructorWorksOK)
{
    CBattleField* ptrBattleField = GetBattleField();
    bool boolEqual = ptrBattleField == NULL;
    EXPECT_FALSE(boolEqual);
}
