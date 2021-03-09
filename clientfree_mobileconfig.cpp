// ----------------------------------------------------------
/*!
	\class ClientFree_MobileConfig
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 09/03/2021 at 10:05:59
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "clientfree_mobileconfig.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

ClientFree_MobileConfig::ClientFree_MobileConfig(QObject *parent) : QObject(parent) {

	A_CONSOLE_MESSAGE_DEBUG("ClientFree_MobileConfig created");
}


// -----------
/*!
	\fn

	Doc.
*/

ClientFree_MobileConfig::~ClientFree_MobileConfig(void) {

	A_CONSOLE_MESSAGE_DEBUG("ClientFree_MobileConfig deleted");
}


// -----------
/*!
	\fn

	Doc.
*/

ClientFree_MobileConfig& ClientFree_MobileConfig::mInstance(void) {

	static ClientFree_MobileConfig oInstance;
	A_CONSOLE_MESSAGE_DEBUG("ClientFree_MobileConfig instantiated");
	return oInstance;
}


// -----------
/*!
	\fn

	Doc.
*/

ASqlCipherProperties* ClientFree_MobileConfig::mGetDBProperties(void) {

	QString oDBName = QString("log_") + QString::number(A_CURRENT_TIME) + ".arb";
	QString oDBPath = pProperties->mGetPathLogs() + "/" + oDBName;

	ASqlCipherProperties* oProperties = new ASqlCipherProperties();
	oProperties->Name = oDBName;
	oProperties->Path = oDBPath;
	return oProperties;
}
