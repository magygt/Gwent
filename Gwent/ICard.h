//
//  ICard.h
//  Gwent
//
//  Created by Magygt on 3/2/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef ICard_h
#define ICard_h

#include "GwentDef.h"

class CBattleField;

class ICard
{
    
public:
    virtual ~ICard(){}
    virtual std::string ToString() = 0;
    virtual Faction BelongsTo() = 0;

};

#endif /* ICard_h */
