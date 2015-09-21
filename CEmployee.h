//
// Created by Jared Marshall on 9/20/15.
//

#ifndef WADSWORTH_CEMPLOYEE_H
#define WADSWORTH_CEMPLOYEE_H

#include "includes.h"
#include "CEntity.h"

class CEmployee : public CEntity
{
public:
    CEmployee();
    ~CEmployee();

private:
    std::string mystrLastName;
    std::string mystrFirstName;
    std::string mystrMiddleName;

    int myiEmployeeID;
};


#endif //WADSWORTH_CEMPLOYEE_H
