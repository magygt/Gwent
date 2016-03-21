//
//  CSpecialCard.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CSpecialCard_h
#define CSpecialCard_h

#include "ICard.h"

enum Usage
{
    USELESS,
    HORN,
    //double the strength of all units in a given row
    DECOY,
    //Swap with a card on the battlefield to return it to your hand.
    SCORCH
    //Destroy the highest value card,
    //or cards if multiple similar point scores exist.
    //This destroys your cards as well.
};

enum Weather
{
    EMPTY,
    CLEAR,
    FROST,
    FOG,
    RAIN
};

class CSpecialCard :
    public ICard
{
public:
    CSpecialCard();
    ~CSpecialCard();
    void ToString();
    
private:
    Usage m_Usage;
    Weather m_Weather;
};
#endif /* CSpecialCard_h */
