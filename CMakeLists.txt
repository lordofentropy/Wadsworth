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
                        "pthread")




set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CEntity.cpp CEntity.h types/enums.h includes.h CEmployee.cpp CEmployee.h)

add_executable(Wadsworth ${SOURCE_FILES})

# set the include path for the app
#target_include_directories(Wadsworth ${POCO_INCLUDE_DIR})
# link the app against POCO
#target_link_libraries(Wadsworth ${POCO_LIBS})
#find_library(POCO ${POCO_LIBS})
find_library(POCO_FOUNDATION PocoFoundation)
find_library(POCO_NET PocoNet)
target_link_libraries(Wadsworth ${POCO_LIBS})
