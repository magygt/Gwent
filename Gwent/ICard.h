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

class ICard
{
public:
    virtual ~ICard(){}
    virtual void OnBoard() = 0;

private:
    Faction m_Faction;
    std::string m_Title;
};

#endif /* ICard_h */
