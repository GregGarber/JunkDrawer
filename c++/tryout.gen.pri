#################################################################################################
## File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! ##
#################################################################################################

!contains(DEFINES, _QX_NO_PRECOMPILED_HEADER) {
PRECOMPILED_HEADER += $$PWD/include/tryout_precompiled_header.gen.h
} # !contains(DEFINES, _QX_NO_PRECOMPILED_HEADER)

HEADERS += $$PWD/include/tryout_precompiled_header.gen.h
HEADERS += $$PWD/include/tryout_export.gen.h

HEADERS += $$PWD/include/database_organization.gen.h
HEADERS += $$PWD/include/database_user.gen.h

HEADERS += $$PWD/custom/include/database_organization.h
HEADERS += $$PWD/custom/include/database_user.h

contains(DEFINES, _QX_UNITY_BUILD) {

SOURCES += $$PWD/src/tryout_all.gen.cpp

} else {

SOURCES += $$PWD/src/database_organization.gen.cpp
SOURCES += $$PWD/src/database_user.gen.cpp

SOURCES += $$PWD/custom/src/database_organization.cpp
SOURCES += $$PWD/custom/src/database_user.cpp

} # contains(DEFINES, _QX_UNITY_BUILD)

include($$PWD/custom/tryout.pri)
