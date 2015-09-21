//
// Created by Jared Marshall on 9/20/15.
//

#include "CEmployee.h"

CEmployee::CEmployee() : CEntity()
{
}

CEmployee::~CEmployee()
{
    bool bEek = false;

    bEek = true;
}

void CEmployee::release()
{
    --this->myiRefCount;

    if ( 0 >= myiRefCount && NULL != this )
    {
        delete this;
    }
}

void CEmployee::duplicate()
{
    ++this->myiRefCount;
}