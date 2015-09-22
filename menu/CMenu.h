//
// Created by Jared Marshall on 9/20/15.
//

#ifndef WADSWORTH_CMENU_H
#define WADSWORTH_CMENU_H

#include "../CEntity.h"

#include "Poco/Data/Time.h"

class CMenu : public CEntity
{
public:
    CMenu();
    CMenu(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    ~CMenu();

private:
    Poco::Data::Time tAvailableStart;
    Poco::Data::Time tAvailableEnd;
};


#endif //WADSWORTH_CMENU_H
