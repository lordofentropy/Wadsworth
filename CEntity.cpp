//
// Created by Jared Marshall on 9/20/15.
//

#include "CEntity.h"

using namespace Poco;
using Poco::UUID;

CEntity::CEntity() : myiRefCount( 1 ),
                     mystrName( "" ),
                     myEntityType( ENTITY_TYPES::ENTITY_TYPE_NONE ),
                     myID()
{
}

CEntity::CEntity(std::string strName, enum ENTITY_TYPES entityType, Poco::UUID ID) : myiRefCount(1),
                                                                                     mystrName( strName ),
                                                                                     myEntityType( entityType ),
                                                                                     myID( ID )
{

}

/*
CEntity::~CEntity()
{
    bool bEek = false;

    bEek = true;
}
*/

void CEntity::release()
{
    --myiRefCount;

    if ( 0 >= myiRefCount && NULL != this )
    {
        delete this;
    }
}

void CEntity::duplicate()
{
    ++myiRefCount;
}

bool CEntity::dump()
{
    bool bRetVal = false;


    return bRetVal;
}