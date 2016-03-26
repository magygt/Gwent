//
//  CLeader.h
//  Gwent
//
//  Created by Magygt on 3/26/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CLeader_h
#define CLeader_h

#include "ICard.h"

class CLeader{
    
public:
    CLeader();
    ~CLeader();
    
private:
    std::string m_Title;
    Faction m_Faction;
    //trick
};

#endif /* CLeader_h */
