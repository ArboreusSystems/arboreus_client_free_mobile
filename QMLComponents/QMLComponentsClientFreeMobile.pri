RESOURCES += \
	$$PWD/QMLComponentsClientFreeMobile.qrc

lupdate_only {

	SOURCES += \
		$$PWD/*.qml \
		$$PWD/Content/*.qml \
		$$PWD/Main/*.qml \
		$$PWD/Screens/*.qml \
		$$PWD/Templates/*.qml
}
