//
//  CUnitCard.cpp
//  Gwent
//
//  Created by Magygt on 3/2/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CUnitCard.h"

std::map<std::string, Faction> CUnitCard::CreateFactionMap()
{
    std::map<std::string,Faction> _map;
    _map["netural"] = NEUTRAL;
    _map[std::string("monster")] = MONSTERS;
    _map[std::string("scoiatael")] = SCOIATAEL;
    _map[std::string("nilfgaardian")] = NILFGAARD;
    _map[std::string("northern")] = NORTHERN_REALMS;
    return _map;
}

std::vector<Tier> CUnitCard::CreateTierVec()
{
    std::vector<Tier> _vec;
    _vec.push_back(CLOSE);
    _vec.push_back(RANGED);
    _vec.push_back(SIEGE);
    return _vec;
}

std::map<std::string,Faction> CUnitCard::mapFaction = CUnitCard::CreateFactionMap();
std::vector<Tier> CUnitCard::vecTier = CUnitCard::CreateTierVec();

CUnitCard::CUnitCard()
{
    
}

//fraction
//northern
//neutral
//scoiatael
//monster
//nilfgaardian

CUnitCard::CUnitCard(std::vector<std::string> &vecCardRaw)
{
    int nStrength = std::stoi(vecCardRaw[1]);
    int nType = std::stoi(vecCardRaw[4]);
    
    m_Genre = UNIT;
    m_Strength = nStrength;
    m_Tier =vecTier[nType];
    m_Title = vecCardRaw[0];
    m_Faction = mapFaction[vecCardRaw[3]];
}

CUnitCard::~CUnitCard()
{
    
}

void CUnitCard::ToString()
{
    
}
