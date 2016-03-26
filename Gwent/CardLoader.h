//
//  CardLoader.h
//  Gwent
//
//  Created by Magygt on 3/21/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#ifndef CardLoader_h
#define CardLoader_h

#include <fstream>
#include "CCardDeck.h"
#include "CUnitCard.h"
#include "CSpecialCard.h"

//data file should have 2 extra new line at the end of file.
std::string CardReader(std::string strFilename);

CCardDeck CardLoader(std::string strFilename);

ICard* CardGen(std::vector<std::string> &vecCardRaw);

#endif /* CardLoader_h */
