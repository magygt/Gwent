//
//  ICard.h
//  Gwent
//
//  Created by Magygt on 3/2/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef ICard_h
#define ICard_h

#include <string>
#include <vector>

enum Faction
{
    NEUTRAL,
    NILFGAARD,
    NORTHERN_REALMS,
    MONSTERS,
    SCOIATAEL
};

enum CardGenre
{
    UNIT,
    SPECIAL
};

class ICard
{
public:
    virtual ~ICard(){}
    virtual void ToString() = 0;

private:
    std::string m_Title;
    Faction m_Faction;
    CardGenre m_Genre;
};

typedef std::vector<ICard*> Deck;

#endif /* ICard_h */
