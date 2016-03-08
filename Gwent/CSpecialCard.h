//
//  CSpecialCard.h
//  Gwent
//
//  Created by Magygt on 3/3/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CSpecialCard_h
#define CSpecialCard_h

#include "ICard.h"

enum Usage
{
    HORN,
    DECOY,
    SCORCH
};

class CSpecialCard :
    public ICard
{
public:
    CSpecialCard();
    ~CSpecialCard();
    void OnBoard();
    
private:
    Usage m_Usage;
};
#endif /* CSpecialCard_h */
