//
//  IDeck.h
//  Gwent
//
//  Created by Magygt on 3/25/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef IDeck_h
#define IDeck_h

#include "ICard.h"

class IDeck{
public:
    virtual ~IDeck(){}
    virtual void EnDeck(ICard*) = 0;
};

#endif /* IDeck_h */

