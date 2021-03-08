exists($$A_PRI_MODULE_PROPERTIES) { include($$A_PRI_MODULE_PROPERTIES) }
else { error(No project configuration file A_PRI_MODULE_PROPERTIES) }

exists($$A_PRI_MODULE_LOGGER) { include($$A_PRI_MODULE_LOGGER) }
else { error(No project configuration file A_PRI_MODULE_LOGGER) }

exists($$A_PRI_MODULE_UNIVERSAL) { include($$A_PRI_MODULE_UNIVERSAL) }
else { error(No project configuration file A_PRI_MODULE_UNIVERSAL) }

exists($$A_PRI_MODULE_DB) { include($$A_PRI_MODULE_DB) }
else { error(No project configuration file A_PRI_MODULE_DB) }
