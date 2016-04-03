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
#include "CardLoader.h"


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
    
    void SetWeather(int nRow)
    {
        m_battleField.m_onWeather[nRow] = true;
    }
    
    void SetHorn(int nRow)
    {
        m_battleField.m_onHorn[nRow] = true;
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

TEST_F(CTestBattleField, GetTotalStrengthWorks)
{
    CCardDeck deckFull = CardLoader("./testCards.data");
    ICard* iCard = NULL;
    for (int _index = 0; _index != deckFull.Size(); ++_index)
    {
        iCard = deckFull.At(_index);
        m_battleField.EnDeck(iCard);
    }
    int nTotalStrength = m_battleField.GetTotalStrength();
    EXPECT_EQ(16, nTotalStrength);
}

TEST_F(CTestBattleField, GetTotalStrengthWorksWhenOnWeather)
{
    CCardDeck deckFull = CardLoader("./testCards.data");
    ICard* iCard = NULL;
    for (int _index = 0; _index != deckFull.Size(); ++_index)
    {
        iCard = deckFull.At(_index);
        m_battleField.EnDeck(iCard);
    }
    SetWeather(0);
    int nTotalStrength = m_battleField.GetTotalStrength();
    EXPECT_EQ(14, nTotalStrength);
}


TEST_F(CTestBattleField, GetTotalStrengthWorksWhenOnHorn)
{
    CCardDeck deckFull = CardLoader("./testCards.data");
    ICard* iCard = NULL;
    for (int _index = 0; _index != deckFull.Size(); ++_index)
    {
        iCard = deckFull.At(_index);
        m_battleField.EnDeck(iCard);
    }
    SetHorn(0);
    int nTotalStrength = m_battleField.GetTotalStrength();
    EXPECT_EQ(19, nTotalStrength);
}

TEST_F(CTestBattleField, GetTotalStrengthWorksWhenOnBoth)
{
    CCardDeck deckFull = CardLoader("./testCards.data");
    ICard* iCard = NULL;
    for (int _index = 0; _index != deckFull.Size(); ++_index)
    {
        iCard = deckFull.At(_index);
        m_battleField.EnDeck(iCard);
    }
    SetHorn(0);
    SetWeather(0);
    int nTotalStrength = m_battleField.GetTotalStrength();
    EXPECT_EQ(15, nTotalStrength);
}
