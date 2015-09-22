//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CGUEST_H
#define WADSWORTH_CGUEST_H


#include "../CEntity.h"

class CGuest : public CEntity
{

public:
    CGuest();
    CGuest(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CGuest();
};


#endif //WADSWORTH_CGUEST_H
