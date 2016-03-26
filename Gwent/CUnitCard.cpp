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
std::vector<std::string> CUnitCard::vecTierString = CUnitCard::InitTierString();
std::vector<std::string> CUnitCard::vecFactionString = CUnitCard::InitFactionString();
std::vector<std::string> CUnitCard::vecAbilityString = CUnitCard::InitAbilityString();

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
    ExtractAbilities(vecCardRaw[2]);
    m_Faction = mapFaction[vecCardRaw[3]];
}

CUnitCard::~CUnitCard()
{
    
}

std::map<std::string, Faction> CUnitCard::InitFactionMap()
{
    std::map<std::string, Faction> _map;
    _map[std::string("netural")] = NEUTRAL;
    _map[std::string("monsters")] = MONSTERS;
    _map[std::string("scoiatael")] = SCOIATAEL;
    _map[std::string("nilfgaardian")] = NILFGAARDIAN;
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

std::map<std::string, Ability> CUnitCard::InitAbilityMap()
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

std::vector<std::string> CUnitCard::InitTierString()
{
    std::vector<std::string> _vec;
    _vec.push_back(std::string("close"));
    _vec.push_back(std::string("ranged"));
    _vec.push_back(std::string("siege"));
    return _vec;
}

std::vector<std::string> CUnitCard::InitFactionString()
{
    std::vector<std::string> _vec;
    _vec.push_back(std::string("neutral"));
    _vec.push_back(std::string("nilfgaardian"));
    _vec.push_back(std::string("northern realms"));
    _vec.push_back(std::string("monsters"));
    _vec.push_back(std::string("scoiatael"));
    return _vec;
}

std::vector<std::string> CUnitCard::InitAbilityString()
{
    std::vector<std::string> _vec;
    _vec.push_back(std::string("nobody"));
    _vec.push_back(std::string("agile"));
    _vec.push_back(std::string("medic"));
    _vec.push_back(std::string("morale boost"));
    _vec.push_back(std::string("muster"));
    _vec.push_back(std::string("tight bond"));
    _vec.push_back(std::string("spy"));
    _vec.push_back(std::string("hero"));
    return _vec;
}

void CUnitCard::ExtractAbilities(std::string strAbility)
{
    std::vector<Ability> _vec;
    std::vector<int> vecPos;
    std::string strAbl;
    for (int _index = 0; _index != strAbility.length(); _index++)
    {
        if (strAbility[_index] == ',')
        {
            vecPos.push_back(_index);
        }
    }
    if (vecPos.size())
    {
        int nStart = 0;
        for (int _index = 0; _index != vecPos.size(); _index++)
        {
            strAbl = strAbility.substr(nStart, vecPos[_index] - nStart);
            _vec.push_back(mapAbility[strAbl]);
            nStart = vecPos[_index] + 1;
        }
        strAbl = strAbility.substr(nStart, strAbility.length() + 1 - nStart);
        _vec.push_back(mapAbility[strAbl]);
    }
    else
    {
        _vec.push_back(mapAbility[strAbility]);
    }
    m_Abilities = _vec;
}

std::string CUnitCard::ToString()
{
    std::string strNewLine = "\n";
    std::string strCard = m_Title + strNewLine;
    strCard += vecFactionString[m_Faction] + strNewLine;
    strCard += vecTierString[m_Tier] + strNewLine;
    strCard += std::string("strength: ") + std::to_string(m_Strength) + strNewLine;
    for (int _index = 0; _index != m_Abilities.size(); ++_index)
    {
        strCard += vecAbilityString[m_Abilities[_index]];
        if (_index != m_Abilities.size() - 1)
        {
            strCard += std::string(", ");
        }
    }
    strCard += strNewLine;
    return strCard;
}

Faction CUnitCard::BelongsTo()
{
    return m_Faction;
}
