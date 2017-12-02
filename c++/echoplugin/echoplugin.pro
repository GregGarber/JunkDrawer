#! [0]
INSTALL_DIR = ./
TEMPLATE    = subdirs
SUBDIRS	    = echowindow \
	      plugin
#! [0]

# install
target.path = $$[INSTALL_DIR]/widgets/tools/echoplugin
INSTALLS += target
