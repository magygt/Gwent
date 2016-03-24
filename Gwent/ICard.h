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
#include <map>

enum Faction
{
    NEUTRAL,
    NILFGAARDIAN,
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
    virtual std::string ToString() = 0;
    
};

typedef std::vector<ICard*> Deck;

#endif /* ICard_h */
