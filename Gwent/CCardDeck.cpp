//
//  CCardDeck.cpp
//  Gwent
//
//  Created by Magygt on 3/25/16.
//  Copyright © 2016 Magygt. All rights reserved.
//

#include "CCardDeck.h"

CCardDeck::CCardDeck()
{
    
}

CCardDeck::~CCardDeck()
{
    
}

void CCardDeck::EnDeck(ICard* ptrCard)
{
    if (ptrCard != NULL)
    {
        m_cardDeck.push_back(ptrCard);
    }
}

ICard* CCardDeck::At(int nIndex)
{
    if (nIndex > m_cardDeck.size())
    {
        return NULL;
    }
    std::list<ICard*>::const_iterator citer = m_cardDeck.begin();
    for (int i = 0; i != nIndex; ++i)
    {
        citer++;
    }
    return (*citer);
}

size_t CCardDeck::Size()
{
    return m_cardDeck.size();
}

std::vector<std::string> CCardDeck::DeckTraverse()
{
    std::vector<std::string> _vec;
    for (std::list<ICard*>::iterator iter = m_cardDeck.begin();
         iter != m_cardDeck.end(); ++iter)
    {
        _vec.push_back((*iter)->ToString());
    }
    return _vec;
}

void CCardDeck::SortByFaction(){
    std::list<ICard*>::iterator iterFaction[5];
    for (int i = 0; i != 5; ++i)
    {
        m_cardDeck.push_front(NULL);
    }
    
    for (int i = 0; i != 5; ++i)
    {
        iterFaction[i] = m_cardDeck.begin();
        for (int j = 0; j != i; ++j)
        {
            iterFaction[i]++;
        }
    }
    
    for (std::list<ICard*>::iterator iter = m_cardDeck.begin(); iter != m_cardDeck.end(); iter++)
    {
        m_cardDeck.insert(iterFaction[(*iter)->BelongsTo()], *iter);
    }
}

void CCardDeck::SortByStrength()
{
}

