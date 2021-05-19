// ----------------------------------------------------------
/*!
	\headerfile AClientFreeMobileConfig
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 17/05/2021 at 19:07:30
	\endlist
*/
// ----------------------------------------------------------

#ifndef ACLIENTFREEMOBILECONFIG_H
#define ACLIENTFREEMOBILECONFIG_H

// System includes
#include <QObject>

// Application includes
#include <aloggerglobal.h>
#include <abackendconfig.h>
#include <auihandlerconfig.h>
#include <apropertiesconfig.h>

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class AClientFreeMobileConfig:
	public QObject,
	public ABackendConfig,
	public AUIHandlerConfig,
	public APropertiesConfig
{

	Q_OBJECT
	Q_INTERFACES(
		ARB::ABackendConfig
		ARB::AUIHandlerConfig
		ARB::APropertiesConfig
	)

	public:

		explicit AClientFreeMobileConfig(QObject* parent = nullptr);
		virtual ~AClientFreeMobileConfig(void);


	// ----------------------------
	// ABackendConfig

	public:

		const char* ABackendConfig_ModuleName(void);

	private:

		const char* pABackendConfig_ModuleName = "Arboreus";


	// ----------------------------
	// AUIHandlerConfig

	public:

		int AUIHandlerConfig_UIWidth(void);
		int AUIHandlerConfig_UIHeight(void);
		int AUIHandlerConfig_DesktopUIWidth(void);
		int AUIHandlerConfig_DesktopUIHeight(void);
		int AUIHandlerConfig_FontSizeHeader(void);
		int AUIHandlerConfig_FontSizeRegular(void);
		int AUIHandlerConfig_FontSizeTextInput(void);
		int AUIHandlerConfig_BorderSize(void);
		int AUIHandlerConfig_Radius(void);
		int AUIHandlerConfig_ElementHeight(void);

	private:

		int pAUIHandlerConfig_UIWidth = 1440;
		int pAUIHandlerConfig_UIHeight = 2560;
		int pAUIHandlerConfig_DesktopUIWidth = 504;
		int pAUIHandlerConfig_DesktopUIHeight = 896;
		int pAUIHandlerConfig_FontSizeHeader = 18;
		int pAUIHandlerConfig_FontSizeRegular = 16;
		int pAUIHandlerConfig_FontSizeTextInput = 16;
		int pAUIHandlerConfig_BorderSize = 1;
		int pAUIHandlerConfig_Radius = 5;
		int pAUIHandlerConfig_ElementHeight = 40;


	// ----------------------------
	// APropertiesConfig

	public:

		QString APropertiesConfig_NameOrganisation(void);
		QString APropertiesConfig_NameDomain(void);
		QString APropertiesConfig_NameApplication(void);

	private:

		QString pAPropertiesConfig_NameOrganisation = "Arboreus";
		QString pAPropertiesConfig_NameDomain = "arboreus.systems";
		QString pAPropertiesConfig_NameApplication = "Storage Client";
};

} // namespace ARB

#endif // ACLIENTFREEMOBILECONFIG_H
