//
//  CSpecialCard.cpp
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CSpecialCard.h"

std::map<std::string, Usage> CSpecialCard::mapUsage = CSpecialCard::InitMapUsage();
std::map<std::string, Weather> CSpecialCard::mapWeather = CSpecialCard::InitMapWeather();

CSpecialCard::CSpecialCard()
            :m_Usage(USELESS),
             m_Weather(EMPTY)
{

}

CSpecialCard::CSpecialCard(std::vector<std::string> &vecCardRaw)
{
    int nType = std::stoi(vecCardRaw[4]);
    if (nType == 4)
    {
        m_Usage = mapUsage[vecCardRaw[0]];
        m_Weather = EMPTY;
    }
    else
    {
        m_Usage = USELESS;
        m_Weather = mapWeather[vecCardRaw[0]];
    }
    
    m_Genre = SPECIAL;
    m_Faction = NEUTRAL;
    m_Title = vecCardRaw[0];
}

CSpecialCard::~CSpecialCard()
{
    
}

std::string CSpecialCard::ToString()
{
    std::string strCard = m_Title;
    return strCard;
}

std::map<std::string, Usage> CSpecialCard::InitMapUsage()
{
    std::map<std::string, Usage> _map;
    _map[std::string("Commander's Horn")] = HORN;
    _map[std::string("Decoy")] = DECOY;
    _map[std::string("Scorch")] = SCORCH;
    return _map;
}
std::map<std::string, Weather> CSpecialCard::InitMapWeather()
{
    std::map<std::string, Weather> _map;
    _map[std::string("Impenetrable Fog")] = FOG;
    _map[std::string("Biting Frost")] = FROST;
    _map[std::string("Torrential Rain")] = RAIN;
    return _map;
}
