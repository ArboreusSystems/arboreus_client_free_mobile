A_DIR_CLIENT_FREE_MOBILE_QML_COMPONENTS = $$PWD/QMLComponents
A_PRI_CLIENT_FREE_MOBILE_QML_COMPONENTS = $$A_DIR_CLIENT_FREE_MOBILE_QML_COMPONENTS/QMLComponentsClientFreeMobile.pri
exists($$A_PRI_CLIENT_FREE_MOBILE_QML_COMPONENTS) {
	include($$A_PRI_CLIENT_FREE_MOBILE_QML_COMPONENTS)
} else {
	error(No QMLComponents config file $$A_PRI_CLIENT_FREE_MOBILE_QML_COMPONENTS)
}

exists($$A_PRI_MODULES_CLIENT_FREE_MOBILE) {
	include($$A_PRI_MODULES_CLIENT_FREE_MOBILE)
} else {
	error(No ClientFree Modules config file $$A_PRI_MODULES_CLIENT_FREE_MOBILE)
}

exists($$A_PRI_MODULES_FREE) {
	include($$A_PRI_MODULES_FREE)
} else {
	error(No Free Modules config file $$A_PRI_MODULES_FREE)
}

exists($$A_PRI_RESOURCES) {
	include($$A_PRI_RESOURCES)
} else {
	error(No Resources config file $$A_PRI_RESOURCES)
}
