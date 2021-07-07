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

	this->mInit_AUIHandlerConfig_Colors();
	this->mInit_AUIHandlerConfig_Fonts();

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

void AClientFreeMobileConfig::mInit_AUIHandlerConfig_Colors(void) {

	pAUIHandlerConfig_Colors.insert("BlackDarkest","#000000");
	pAUIHandlerConfig_Colors.insert("BlackDark","#080808");
	pAUIHandlerConfig_Colors.insert("Black","#161616");
	pAUIHandlerConfig_Colors.insert("BlackLight","#242424");

	pAUIHandlerConfig_Colors.insert("WhiteDark","#f4f4f4");
	pAUIHandlerConfig_Colors.insert("White","#f8f8f8");
	pAUIHandlerConfig_Colors.insert("WhiteLight","#ffffff");

	pAUIHandlerConfig_Colors.insert("GreyDarkest","#666666");
	pAUIHandlerConfig_Colors.insert("GreyDark","#BCBEC0");
	pAUIHandlerConfig_Colors.insert("Grey","#D2D3D4");
	pAUIHandlerConfig_Colors.insert("GreyLight","#E6E7E8");

	pAUIHandlerConfig_Colors.insert("PurpleDark","#5e083c");
	pAUIHandlerConfig_Colors.insert("Purple","#900a5b");
	pAUIHandlerConfig_Colors.insert("PurpleLight","#5e083c");

	pAUIHandlerConfig_Colors.insert("RedDark","#771021");
	pAUIHandlerConfig_Colors.insert("Red","#B71F31");
	pAUIHandlerConfig_Colors.insert("RedDark","#771021");

	pAUIHandlerConfig_Colors.insert("GreenDark","#245618");
	pAUIHandlerConfig_Colors.insert("Green","#3E6C34");
	pAUIHandlerConfig_Colors.insert("GreenLight","#3F7F2F");

	pAUIHandlerConfig_Colors.insert("BlueDark","#5cbbfb");
	pAUIHandlerConfig_Colors.insert("Blue","#50a2d9");
	pAUIHandlerConfig_Colors.insert("BlueLight","#186497");

	pAUIHandlerConfig_Colors.insert("SaladDark","#539000");
	pAUIHandlerConfig_Colors.insert("Salad","#66a511");
	pAUIHandlerConfig_Colors.insert("SaladLight","#92da2f");

	pAUIHandlerConfig_Colors.insert("FiolentDark","#402190");
	pAUIHandlerConfig_Colors.insert("Fiolent","#5626d2");
	pAUIHandlerConfig_Colors.insert("FiolentLight","#402190");

	pAUIHandlerConfig_Colors.insert("OrangeDark","#fcaa4a");
	pAUIHandlerConfig_Colors.insert("Orange","#f68c0f");
	pAUIHandlerConfig_Colors.insert("OrangeLight","#402190");
}


// -----------
/*!
	\fn

	Doc.
*/

void AClientFreeMobileConfig::mInit_AUIHandlerConfig_Fonts(void) {

	pAUIHandlerConfig_Fonts = {
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Black.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-BlackItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Bold.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-BoldItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-ExtraBold.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-ExtraBoldItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-ExtraLight.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-ExtraLightItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Italic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Italic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-LightItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Medium.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-MediumItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Regular.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-SemiBold.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-SemiBoldItalic.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-Thin.ttf",
		":/Resources/Fonts/FiraSansCondensed/FiraSansCondensed-ThinItalic.ttf"
	};
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

QString AClientFreeMobileConfig::AUIHandlerConfig_QMLImport(void) {

	QString oOutput = ""
		"import \"qrc:/ClientFreeMobile/QMLComponents/Content\";";
	return oOutput;
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

QMap<QString, QString> AClientFreeMobileConfig::AUIHandlerConfig_Colors(void) {

	return pAUIHandlerConfig_Colors;
}


// -----------
/*!
	\fn

	Doc.
*/

QList<QString> AClientFreeMobileConfig::AUIHandlerConfig_Fonts(void) {

	return pAUIHandlerConfig_Fonts;
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


