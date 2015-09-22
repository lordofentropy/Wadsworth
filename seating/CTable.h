//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CTABLE_H
#define WADSWORTH_CTABLE_H


#include "../CEntity.h"

class CTable : public CEntity
{


public:
    CTable();
    CTable(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CTable();

private:
    int myiTableID;
};


#endif //WADSWORTH_CTABLE_H
