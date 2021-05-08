QT += quick

CONFIG += c++11

VERSION = 0.0.1

QMAKE_TARGET_BUNDLE_PREFIX = systems.arboreus
CONFIG(debug,debug|release) {
	TARGET = StorageDebug
} else {
	TARGET = Storage
}

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

A_PRI_CONFIG = $$PWD/../Config.pri
exists($$A_PRI_CONFIG) {
	include($$A_PRI_CONFIG)
} else {
	error(No main config file $$A_PRI_CONFIG)
}

exists($$A_PRI_CLIENT_FREE_MOBILE) {
	include($$A_PRI_CLIENT_FREE_MOBILE)
} else {
	error(No ClientFree Mobile config file $$A_PRI_CLIENT_FREE_MOBILE)
}

SOURCES += \
	clientfree_mobile.cpp


macos {

	CONFIG += sdk_no_versioncheck
}

ios {

	CONFIG -= bitcode

	QMAKE_IOS_DEPLOYMENT_TARGET = 10.0
	QMAKE_APPLE_TARGETED_DEVICE_FAMILY = 1,2
}
