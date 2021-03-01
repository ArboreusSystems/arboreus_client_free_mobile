A_PRI_CONFIG = $$(A_DIR_ROOT)/Config.pri
exists($$A_PRI_CONFIG) {

	include($$A_PRI_CONFIG)

	exists($$A_PRI_CLIENT_FREE_MOBILE) { include($$A_PRI_CLIENT_FREE_MOBILE) }
	else { error(No project configuration file A_PRI_CLIENT_FREE_MOBILE) }

	QT += quick

	CONFIG += c++11

	SOURCES += \
		clientfree_mobile.cpp

} else { error(No config file $$A_PRI_CONFIG) }

HEADERS += \
	clientfree_mobile.h

SOURCES +=





