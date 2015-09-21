//
// Created by Jared Marshall on 9/20/15.
//

#ifndef WADSWORTH_CENTITY_H
#define WADSWORTH_CENTITY_H

// our main include file
#include "includes.h"

class CEntity
{
public:
    CEntity();
    CEntity( std::string strName, ENTITY_TYPES entityType, Poco::UUID ID );
    ~CEntity();

    bool dump();

    // autoptr support
    virtual void release () = 0;
    virtual void duplicate () = 0;

protected:
    int myiRefCount;
private:

    std::string mystrName;
    ENTITY_TYPES myEntityType;
    Poco::UUID myID;

    Poco::Timestamp mytsCreated;
    Poco::Timestamp mytsModified;


};


#endif //WADSWORTH_CENTITY_H
