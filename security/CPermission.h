//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CPERMISSION_H
#define WADSWORTH_CPERMISSION_H

#include "../CEntity.h"

class CPermission : public CEntity
{

public:

    CPermission();
    CPermission(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CPermission();
};


#endif //WADSWORTH_CPERMISSION_H
