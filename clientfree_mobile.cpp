// ----------------------------------------------------------
/*!
	\class
	\title
	\brief Template file files/cppsource/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/04/2021 at 18:55:19
	\endlist
*/
// ----------------------------------------------------------

// System includes
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

// Application includes
#include <aclientbackend.h>

// Constants
#define CLIENT_QML_MAIN "qrc:/ClentFree/Modules/QMLComponents/Main/ClientFree_Mobile.qml"

// Namespace
using namespace ARB;


// Qt Quick Application
int main(int inCounter, char* inArguments[]) {

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

	QGuiApplication oApplication(inCounter, inArguments);
	QQmlApplicationEngine oEngine;

	AClientBackend* oBackend = &AClientBackend::mInstance();
	oBackend->pEngine = &oEngine;
	oBackend->pGuiApplication = &oApplication;
	oBackend->pRootContext = oEngine.rootContext();

	oBackend->mInit();

	const QUrl oURL(QStringLiteral(CLIENT_QML_MAIN));
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
