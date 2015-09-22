//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CSECTION_H
#define WADSWORTH_CSECTION_H


#include "../CEntity.h"

class CSection : CEntity
{

public:
    CSection();
    CSection(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CSection();
};


#endif //WADSWORTH_CSECTION_H
