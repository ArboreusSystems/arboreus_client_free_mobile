exists($$A_PRI_MODULE_BACKEND) { include($$A_PRI_MODULE_BACKEND) }
else { error(No project configuration file A_PRI_MODULE_BACKEND) }

exists($$A_PRI_MODULE_PROPERTIES) { include($$A_PRI_MODULE_PROPERTIES) }
else { error(No project configuration file A_PRI_MODULE_PROPERTIES) }

exists($$A_PRI_MODULE_LOGGER) { include($$A_PRI_MODULE_LOGGER) }
else { error(No project configuration file A_PRI_MODULE_LOGGER) }


RESOURCES += \
	$$PWD/ClientFree_Mobile.qrc


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
