// ----------------------------------------------------------
/*!
	\headerfile ClientFree_MobileConfig
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 09/03/2021 at 10:05:59
	\endlist
*/
// ----------------------------------------------------------

#ifndef CLIENTFREE_MOBILECONFIG_H
#define CLIENTFREE_MOBILECONFIG_H

// System includes
#include <QObject>

// Application includes
#include <aproperties.h>
#include <aclientbackend.h>
#include <alogger.h>
#include <auniversaldefinitions.h>

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class ClientFree_MobileConfig
: public QObject, public AClientBackendConfig, public ALoggerConfig {

	Q_OBJECT

	public:

		AProperties* pProperties = nullptr;

		static ClientFree_MobileConfig& mInstance(void);
		ASqlCipherProperties* mGetDBProperties(void);

	private:

		explicit ClientFree_MobileConfig(QObject *parent = nullptr);
		virtual ~ClientFree_MobileConfig(void);
		Q_DISABLE_COPY(ClientFree_MobileConfig)
};

} // namespace ARB

#endif // CLIENTFREE_MOBILECONFIG_H
