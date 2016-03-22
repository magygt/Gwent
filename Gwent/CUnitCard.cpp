//
//  CUnitCard.cpp
//  Gwent
//
//  Created by Magygt on 3/2/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CUnitCard.h"

std::vector<Tier> CUnitCard::vecTier = CUnitCard::InitTierVec();
std::map<std::string, Faction> CUnitCard::mapFaction = CUnitCard::InitFactionMap();
std::map<std::string, Ability> CUnitCard::mapAbility = CUnitCard::InitAbilityMap();

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

std::map<std::string, Faction> CUnitCard::InitFactionMap()
{
    std::map<std::string, Faction> _map;
    _map[std::string("netural")] = NEUTRAL;
    _map[std::string("monster")] = MONSTERS;
    _map[std::string("scoiatael")] = SCOIATAEL;
    _map[std::string("nilfgaardian")] = NILFGAARD;
    _map[std::string("northern")] = NORTHERN_REALMS;
    return _map;
}

std::vector<Tier> CUnitCard::InitTierVec()
{
    std::vector<Tier> _vec;
    _vec.push_back(CLOSE);
    _vec.push_back(RANGED);
    _vec.push_back(SIEGE);
    return _vec;
}

std::map<std::string, Ability> InitAbilityMap()
{
    std::map<std::string, Ability> _map;
    _map[std::string("null")] = NOBODY;
    _map[std::string("agile")] = AGILE;
    _map[std::string("medic")] = MEDIC;
    _map[std::string("morale_boost")] = MORALE_BOOST;
    _map[std::string("muster")] = MUSTER;
    _map[std::string("tight_bond")] = TIGHT_BOND;
    _map[std::string("spy")] = SPY;
    _map[std::string("hero")] = HERO;
    return _map;
}

void CUnitCard::ExtractAbilities(std::string strAbility)
{
//    std::vector<Ability> _vec;
//    std::string strAbl;
//    int nPos = 0;
//    int nStart = 0;
//    nPos = strAbility.find(nStart, ',');
//    do
//    {
//        strAbi = strAbility.substr(nStart, nPos - nStart);
//        nStart = nPos + 1;
//        nPos = strAbility.find(nStart, ',');
//    }
//    while (nPos != -1);
}

std::string CUnitCard::ToString()
{
    std::string strCard = m_Title;
    return strCard;
}
