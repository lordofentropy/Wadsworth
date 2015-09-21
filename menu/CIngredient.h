//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CINGREDIENT_H
#define WADSWORTH_CINGREDIENT_H

#include "../CEntity.h"

class CIngredient : public CEntity
{

public:
    CIngredient();
    CIngredient(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CIngredient();
};


#endif //WADSWORTH_CINGREDIENT_H
