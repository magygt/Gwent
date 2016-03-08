//
//  CHeroCard.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CHeroCard_h
#define CHeroCard_h

#include "CUnitCard.h"

class CHeroCard :
    public CUnitCard
{
public:
    CHeroCard();
    ~CHeroCard();
    void OnBoard();

};

#endif /* CHeroCard_h */
