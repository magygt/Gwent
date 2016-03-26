//
//  GwentDef.h
//  Gwent
//
//  Created by Magygt on 3/26/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef GwentDef_h
#define GwentDef_h

#include <string>
#include <vector>
#include <map>
#include <list>

#define PLAYER_NUM              (2)
#define BATTLE_FIELD_RANGE      (3)


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

enum Tier
{
    CLOSE,
    RANGED,
    SIEGE
};


#endif /* GwentDef_h */
