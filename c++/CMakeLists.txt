#################################################################################################
## File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! ##
#################################################################################################

cmake_minimum_required(VERSION 3.1)

project(tryout LANGUAGES CXX)

if(NOT TARGET QxOrm)
   add_subdirectory("/home/g/Downloads/QxEntityEditor_Linux_64b/app/lib/" ./QxOrm)
endif() # NOT TARGET QxOrm

include("/home/g/Downloads/QxEntityEditor_Linux_64b/app/lib/QxOrm.cmake")

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_DEBUG_POSTFIX "d")

set(TRYOUT_HEADERS
    ./include/tryout_precompiled_header.gen.h
    ./include/tryout_export.gen.h
    ./include/database_organization.gen.h
    ./include/database_user.gen.h
    ./custom/include/database_organization.h
    ./custom/include/database_user.h
   )

if(_QX_UNITY_BUILD)

   set(TRYOUT_SRCS ./src/tryout_all.gen.cpp)

else() # _QX_UNITY_BUILD

   set(TRYOUT_SRCS
       ./src/database_organization.gen.cpp
       ./src/database_user.gen.cpp
       ./custom/src/database_organization.cpp
       ./custom/src/database_user.cpp
       ./src/tryout_main.gen.cpp
      )

endif() # _QX_UNITY_BUILD

add_library(tryout SHARED ${TRYOUT_SRCS} ${TRYOUT_HEADERS})

target_compile_definitions(tryout PRIVATE -D_BUILDING_TRYOUT)

target_link_libraries(tryout ${QX_LIBRARIES} QxOrm)

set_target_properties(tryout PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                     )

qx_auto_source_group("${TRYOUT_SRCS};${TRYOUT_HEADERS}")
