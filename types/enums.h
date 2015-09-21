//
// Created by Jared Marshall on 9/20/15.
//

#ifndef WADSWORTH_ENUMS_H
#define WADSWORTH_ENUMS_H

enum ENTITY_TYPES
{
    ENTITY_TYPE_NONE = 0,
    ITEM_MENU = 1,
    ITEM_INGREDIENT = 2,
    PERSON_EMPLOYEE = 4,
    PERSON_GUEST = 8,
    LOCATION_TABLE = 16,
    LOCATION_SEAT = 32,
    RULE_PERMISSION = 64,
    RULE_SECURITY = 128
};

typedef enum ENTITY_TYPES ENTITY_TYPES;

enum EMPLOYEE_TYPES
{
    EMPLOYEE_TYPE_NONE = 0,
    MANAGER = 1, // Typical manager with permissions to alter a lot(checks, schedule, etc, but probably not menu items/pricing and the like)
    SERVER = 2,
    BARTENDER = 4,
    KITCHEN = 8,
    HOST = 16,
    SECURITY = 32,
    BUSSER = 64,
    AUDITOR = 128, // likely the GM/Owner type account
    ADMIN = 256,
    TEMPORARY = 512, // temps hired for events, used to restrict permissions greatly
    ARCHIVED = 1024 // Past Employees, kept in system for created/modified and etc
};

typedef enum EMPLOYEE_TYPES EMPLOYEE_TYPES;

enum MESSAGE_TYPES
{
    MESSAGE_TYPE_NONE = 0,
    AT_FIRST_LOGON = 1,
    MAILBOX = 2,
    CHECK_GUEST = 4,
    CHECK_KITCHEN = 8,
    CURRENT_LOGON = 16,
    ALL_ACTIVE_TERMINAL = 32
};

typedef enum MESSAGE_TYPES MESSAGE_TYPES;

#endif //WADSWORTH_ENUMS_H
