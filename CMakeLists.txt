cmake_minimum_required(VERSION 3.3)
project(Wadsworth)

# set the POCO paths and libs
set(POCO_PREFIX         "/usr/local") # the directory containing "include" and "lib"
set(POCO_INCLUDE_DIR    "${POCO_PREFIX}/include/Poco")
set(POCO_LIB_DIR        "${POCO_PREFIX}/lib")
set(POCO_LIBS           "${POCO_LIB_DIR}/libPocoNet.a"
                        "${POCO_LIB_DIR}/libPocoUtil.a"
                        "${POCO_LIB_DIR}/libPocoJSON.a"
                        "${POCO_LIB_DIR}/libPocoXML.a"
                        "${POCO_LIB_DIR}/libPocoFoundation.a"
                        "${POCO_LIB_DIR}/libPocoData.a"
                        "pthread")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES    main.cpp
                    CEntity.cpp
                    CEntity.h
                    types/enums.h
                    includes.h
                    staff/CEmployee.cpp
                    staff/CEmployee.h
                    menu/CMenu.cpp
                    menu/CMenu.h
                    menu/CMenuItem.cpp
                    menu/CMenuItem.h
                    menu/CIngredient.cpp
                    menu/CIngredient.h
                    guest/CGuest.cpp
                    guest/CGuest.h
                    seating/CTable.cpp
                    seating/CTable.h
                    seating/CSeat.cpp
                    seating/CSeat.h
                    check/CCheck.cpp
                    check/CCheck.h
                    seating/CSection.cpp
                    seating/CSection.h
                    security/CAccount.cpp
                    security/CAccount.h
                    check/CheckItem.cpp
                    check/CheckItem.h
                    staff/CMailBox.cpp
                    staff/CMailBox.h
                    scheduling/CSchedule.cpp
                    scheduling/CSchedule.h
                    security/CPermission.cpp
                    security/CPermission.h)

add_executable(Wadsworth ${SOURCE_FILES})

# set the include path for the app
#target_include_directories(Wadsworth ${POCO_INCLUDE_DIR})
# link the app against POCO
#target_link_libraries(Wadsworth ${POCO_LIBS})
#find_library(POCO ${POCO_LIBS})
find_library(POCO_FOUNDATION PocoFoundation)
find_library(POCO_NET PocoNet)
find_library(POCO_DATA PocoData)
target_link_libraries(Wadsworth ${POCO_LIBS})
