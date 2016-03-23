//
//  TestCardLoader.cpp
//  Gwent
//
//  Created by Magygt on 3/23/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "gtest/gtest.h"
#include "CardLoader.h"

class CTestCardLoader:
public ::testing::Test
{
protected:
    CTestCardLoader()
    {
        
    }
    
    virtual ~CTestCardLoader()
    {
        
    }
    
    virtual void SetUp()
    {
        
    }
    
    virtual void TearDown()
    {
        
    }
    
public:

};

TEST_F(CTestCardLoader, CardLoaderWorks)
{
    Deck deckFull = CardLoader("./testCards.data");
    size_t nDeckSize = deckFull.size();
    EXPECT_EQ(3, nDeckSize);
}

TEST_F(CTestCardLoader, UnitCardConstructorsOk)
{
    Deck deckFull = CardLoader("./testCards.data");
    std::string strActualCard = deckFull[0]->ToString();
    std::string strExpectCard = "Brutal Gordon\nnorthern realms\nranged\nstrength: 8\nhero\n";
    EXPECT_EQ(strExpectCard, strActualCard);
    strActualCard = deckFull[1]->ToString();
    strExpectCard = "Jerk Off Flurry\nmonsters\nclose\nstrength: 3\nspy\n";
    EXPECT_EQ(strExpectCard, strActualCard);
    strActualCard = deckFull[2]->ToString();
    strExpectCard = "Fag John\nnilfgaardian\nsiege\nstrength: 5\nmedic\n";
    EXPECT_EQ(strExpectCard, strActualCard);
}
