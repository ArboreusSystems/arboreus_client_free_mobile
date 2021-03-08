exists($$A_PRI_MODULES_FREE) { include($$A_PRI_MODULES_FREE) }
else { error(No project configuration file A_PRI_MODULES_FREE) }

exists($$A_PRI_MODULES_CLIENT_FREE) { include($$A_PRI_MODULES_CLIENT_FREE) }
else { error(No project configuration file A_PRI_MODULES_CLIENT_FREE) }


RESOURCES += \
	$$PWD/ClientFree_Mobile.qrc


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
