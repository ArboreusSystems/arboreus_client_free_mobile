// ----------------------------------------------------------
/*!
	\class AClientFreeMobileConfig
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 17/05/2021 at 19:07:30
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "aclientfreemobileconfig.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AClientFreeMobileConfig::AClientFreeMobileConfig(QObject *parent) : QObject(parent) {

	_A_DEBUG << "AClientFreeMobileConfig created";
}


// -----------
/*!
	\fn

	Doc.
*/

AClientFreeMobileConfig::~AClientFreeMobileConfig(void) {

	_A_DEBUG << "AClientFreeMobileConfig deleted";
}


// -----------
/*!
	\fn

	Doc.
*/

const char *AClientFreeMobileConfig::ABackendConfig_ModuleName(void) {

	return pABackendConfig_ModuleName;
}

// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_UIWidth(void) {

	return pAUIHandlerConfig_UIWidth;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_UIHeight(void) {

	return pAUIHandlerConfig_UIHeight;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_DesktopUIWidth(void) {

	return pAUIHandlerConfig_DesktopUIWidth;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_DesktopUIHeight(void) {

	return pAUIHandlerConfig_DesktopUIHeight;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_FontSizeHeader(void) {

	return pAUIHandlerConfig_FontSizeHeader;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_FontSizeRegular(void) {

	return pAUIHandlerConfig_FontSizeRegular;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_FontSizeTextInput(void) {

	return pAUIHandlerConfig_FontSizeTextInput;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_BorderSize(void) {

	return pAUIHandlerConfig_BorderSize;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_Radius(void) {

	return pAUIHandlerConfig_Radius;
}


// -----------
/*!
	\fn

	Doc.
*/

int AClientFreeMobileConfig::AUIHandlerConfig_ElementHeight(void) {

	return pAUIHandlerConfig_ElementHeight;
}


// -----------
/*!
	\fn

	Doc.
*/

QString AClientFreeMobileConfig::APropertiesConfig_NameOrganisation(void) {

	return pAPropertiesConfig_NameOrganisation;
}


// -----------
/*!
	\fn

	Doc.
*/

QString AClientFreeMobileConfig::APropertiesConfig_NameDomain(void) {

	return pAPropertiesConfig_NameDomain;
}


// -----------
/*!
	\fn

	Doc.
*/

QString AClientFreeMobileConfig::APropertiesConfig_NameApplication(void) {

	return pAPropertiesConfig_NameApplication;
}


