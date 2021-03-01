// ----------------------------------------------------------
/*!
	\class
	\title
	\brief Template file files/cppsource/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/02/2021 at 11:32:33
	\endlist
*/
// ----------------------------------------------------------

// System includes
#include <QGuiApplication>
#include <QQmlApplicationEngine>

// Application includes
#include <clientfree_mobile.h>
#include <aclientbackend.h>

// Namespace
using namespace ARB;

// Constants
#define A_QML_CLIENT_MAIN "qrc:/ClientFree/Mobile/Main/Main.qml"

// Qt Quick Application
int main(int inCounter, char *inArguments[]) {

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

	QGuiApplication oApplication(inCounter, inArguments);
	QQmlApplicationEngine oEngine;

	AProperties* oProperties = &AProperties::mInstance();
	oProperties->mSetNameApplication(A_CONFIG_NAME_APPLICATION);
	oProperties->mSetNameOrganisation(A_CONFIG_NAME_ORGANISATION);
	oProperties->mSetNameDomain(A_CONFIG_NAME_DOMAIN);
	oProperties->mInit();

	ALogger* oLogger = &ALogger::mInstance();
	oLogger->pProperties = oProperties;

	AClientBackend* oBackend = &AClientBackend::mInstance();
	oBackend->pGuiApplication = &oApplication;
	oBackend->pEngine = &oEngine;
	oBackend->pRootContext = oEngine.rootContext();
	oBackend->pProperties = oProperties;
	oBackend->pLogger = oLogger;
	oBackend->mInit();

	const QUrl oURL(QStringLiteral(A_QML_CLIENT_MAIN));
	QObject::connect(
		&oEngine, &QQmlApplicationEngine::objectCreated,
		&oApplication, [oURL](QObject *obj, const QUrl &objUrl) {
			if (!obj && oURL == objUrl) {
				QCoreApplication::exit(-1);
			}
		}, Qt::QueuedConnection
	);
	oEngine.load(oURL);

	return oApplication.exec();
}
