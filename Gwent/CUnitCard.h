//
//  CUnitCard.h
//  Gwent
//
//  Created by Magygt on 3/2/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CUnitCard_h
#define CUnitCard_h

#include "ICard.h"


enum Tier
{
    CLOSE,
    RANGED,
    SIEGE
};


//have thought of using mask
enum Ability
{
    NOBODY,
    //normal unit with no ability.
    AGILE,
    //can be placed in either close combat or ranged rows.
    MEDIC,
    //choose one card from your discard pile to play instantly
    //excludes heroes, weather or specail cards
    MORALE_BOOST,
    //adds +1 strength to every card in it's row, excluding itself
    MUSTER,
    //finds any cards with the same name in your deck and plays them instantly
    TIGHT_BOND,
    //doubles the strength of both cards when
    //placed next to a unit of the same name
    SPY,
    //place on an opponents battlefield
    //then draw two cards from your own deck
    HERO
};



class CUnitCard :
    public ICard
{
public:
    CUnitCard();
    CUnitCard(std::vector<std::string> &vecCardRaw);
    ~CUnitCard();
    std::string ToString();
    
    static std::vector<Tier> vecTier;
    static std::map<std::string, Faction> mapFaction;
    static std::map<std::string, Ability> mapAbility;
    
    static std::vector<std::string> vecTierString;
    static std::vector<std::string> vecFactionString;
    static std::vector<std::string> vecAbilityString;
private:
    static std::vector<Tier> InitTierVec();
    static std::map<std::string, Faction> InitFactionMap();
    static std::map<std::string, Ability> InitAbilityMap();
    static std::vector<std::string> InitTierString();
    static std::vector<std::string> InitFactionString();
    static std::vector<std::string> InitAbilityString();
    void ExtractAbilities(std::string strAbility);
    
private:
    Tier m_Tier;
    int m_Strength;
    std::vector<Ability> m_Abilities;    
};

#endif /* CUnitCard_h */
