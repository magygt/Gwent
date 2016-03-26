//
//  CardLoader.cpp
//  Gwent
//
//  Created by Magygt on 3/21/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CardLoader.h"

std::string CardReader(std::string strFilename)
{
    std::ifstream ifsCardFile(strFilename);
    if (ifsCardFile.fail())
    {
        return NULL;
    }
    std::string strGwentRaw( (std::istreambuf_iterator<char>(ifsCardFile)),
                            (std::istreambuf_iterator<char>()) );
    ifsCardFile.close();
    return strGwentRaw;
}

CCardDeck CardLoader(std::string strFilename)
{
    Deck deckFull;
    std::string strGwentRaw = CardReader(strFilename);
    
    //std::cout << strGwentRaw << std::endl;
    unsigned long nLength = strGwentRaw.length();
    unsigned long _index = 0;
    unsigned long posTitle, posStrength, posAbiliity, posFaction, posType;
    std::string strTitle, strStrength, strAbility, strFaction, strType;
    std::vector<std::string> vecCardRaw;
    CCardDeck deck;
    ICard* iTmp;
    while (_index < nLength)
    {
        posTitle = _index;
        posStrength = strGwentRaw.find('\n', posTitle);
        strTitle = strGwentRaw.substr(posTitle,
                                      posStrength - posTitle);
        vecCardRaw.push_back(strTitle);
        posAbiliity = strGwentRaw.find('\n', posStrength + 1);
        strStrength = strGwentRaw.substr(posStrength + 1,
                                         posAbiliity - posStrength - 1);
        vecCardRaw.push_back(strStrength);
        posFaction = strGwentRaw.find('\n', posAbiliity + 1);
        strAbility = strGwentRaw.substr(posAbiliity + 1,
                                        posFaction - posAbiliity - 1);
        vecCardRaw.push_back(strAbility);
        posType = strGwentRaw.find('\n', posFaction + 1);
        strFaction = strGwentRaw.substr(posFaction + 1,
                                         posType - posFaction - 1);
        vecCardRaw.push_back(strFaction);
        _index = strGwentRaw.find('\n', posType + 1);
        strType = strGwentRaw.substr(posType + 1,
                                     _index - posType - 1);
        vecCardRaw.push_back(strType);
        iTmp = CardGen(vecCardRaw);
        if (iTmp)
        {
            deck.EnDeck(iTmp);
        }
        vecCardRaw.clear();
        _index += 2;
    }
    return deck;
}


//0 title
//1 strength
//2 ability
//3 fraction
//4 type
ICard* CardGen(std::vector<std::string> &vecCardRaw)
{
    int nType = std::stoi(vecCardRaw[4]);
    ICard* pCard = NULL;
    if (nType < 3)
    {
        pCard = new CUnitCard(vecCardRaw);
    }
    else if (nType > 3)
    {
        pCard = new CSpecialCard(vecCardRaw);
    }
    return pCard;
}

