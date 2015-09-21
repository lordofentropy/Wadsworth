//
// Created by Jared Marshall on 9/20/15.
//
// Base Class for most everything in system
// Intended to provide/enforce logging, autoptr, and other functionality
// throughout the system.
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
    virtual ~CEntity(){};

    bool dump();

    // autoptr support
    void release (); // = 0;
    void duplicate (); // = 0;

    // getter/setter
    const std::string &Name() const
    {
        return mystrName;
    }

    void Name(const std::string &strName)
    {
        CEntity::mystrName = strName;
    }

    const ENTITY_TYPES &EntityType() const
    {
        return myEntityType;
    }

    void EntityType(const ENTITY_TYPES &EntityType)
    {
        CEntity::myEntityType = EntityType;
    }

    const Poco::UUID &ID() const
    {
        return myID;
    }

    void ID(const Poco::UUID &uuid)
    {
        CEntity::myID = uuid;
    }

    const Poco::Timestamp &Created() const
    {
        return mytsCreated;
    }

    void Created(const Poco::Timestamp &tsCreated)
    {
        CEntity::mytsCreated = tsCreated;
    }

    const Poco::Timestamp &Modified() const
    {
        return mytsModified;
    }

    void Modified(const Poco::Timestamp &tsModified)
    {
        CEntity::mytsModified = tsModified;
    }

    const CEntity* CreatedBy() const
    {
        return myentityCreatedBy;
    }

    void CreatedBy(CEntity* entityCreatedBy)
    {
        CEntity::myentityCreatedBy = entityCreatedBy;
    }

    const CEntity* LastModifiedBy() const
    {
        return myentityLastModifiedBy;
    }

    void LastModifiedBy(CEntity* entityLastModifiedBy)
    {
        CEntity::myentityLastModifiedBy =  entityLastModifiedBy;
    }

private:
    // autoptr support
    int myiRefCount;

    std::string mystrName;
    ENTITY_TYPES myEntityType;
    Poco::UUID myID;

    Poco::Timestamp mytsCreated;
    Poco::Timestamp mytsModified;

    CEntity* myentityCreatedBy;
    CEntity* myentityLastModifiedBy;
};


#endif //WADSWORTH_CENTITY_H
