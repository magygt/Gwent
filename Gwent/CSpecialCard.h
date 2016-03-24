//
//  CSpecialCard.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CSpecialCard_h
#define CSpecialCard_h

#include "CBattleField.h"

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
    CSpecialCard(std::vector<std::string> &vecCardRaw);
    ~CSpecialCard();
    
    std::string ToString();
    
    static std::map<std::string, Usage> mapUsage;
    static std::map<std::string, Weather> mapWeather;
    static std::vector<std::string> vecUsageString;
    static std::vector<std::string> vecWeatherString;
    
private:
    static std::map<std::string, Usage> InitMapUsage();
    static std::map<std::string, Weather> InitMapWeather();
    static std::vector<std::string> InitVecUsage();
    static std::vector<std::string> InitVecWeather();
    
private:
    Usage m_Usage;
    Weather m_Weather;
    Faction m_Faction;
    CardGenre m_Genre;
    std::string m_Title;
};
#endif /* CSpecialCard_h */
