//
//  CWeatherCard.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CWeatherCard_h
#define CWeatherCard_h

#include "ICard.h"

enum Weather
{
    FROST,
    FOG,
    RAIN
};

class CWeatherCard :
    public ICard
{
public:
    CWeatherCard();
    ~CWeatherCard();
    void OnBoard();
    
private:
    Weather m_Weather;
};

#endif /* CWeatherCard_h */
