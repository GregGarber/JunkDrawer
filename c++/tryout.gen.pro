#################################################################################################
## File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! ##
#################################################################################################

include(/home/g/Downloads/QxEntityEditor_Linux_64b/app/lib/QxOrm.pri)

TEMPLATE = lib
CONFIG += dll
DEFINES += _BUILDING_TRYOUT
INCLUDEPATH += /home/g/Downloads/QxEntityEditor_Linux_64b/app/lib/include
DESTDIR = $$PWD/bin/

CONFIG(debug, debug|release) {
TARGET = tryoutd
} else {
TARGET = tryout
} # CONFIG(debug, debug|release)

LIBS += -L"/home/g/Downloads/QxEntityEditor_Linux_64b/app/lib/lib"

CONFIG(debug, debug|release) {
LIBS += -l"QxOrmd"
} else {
LIBS += -l"QxOrm"
} # CONFIG(debug, debug|release)

include($$PWD/tryout.gen.pri)

!contains(DEFINES, _QX_UNITY_BUILD) {
SOURCES += $$PWD/src/tryout_main.gen.cpp
} # !contains(DEFINES, _QX_UNITY_BUILD)
