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
#include <QEventLoop>

// Application includes
#include <abackend.h>
#include <aclientfreemobileconfig.h>
#include <athreadobjectcontrollertemplate.h>

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

	qInstallMessageHandler(fLoggerMessageHandler);

	AClientFreeMobileConfig* oConfig = new AClientFreeMobileConfig(&oEngine);
	AThreadObjectControllerTemplate* oController = new AThreadObjectControllerTemplate();
	QEventLoop* oEventLoop = new QEventLoop();
	const QUrl oURL(QStringLiteral(CLIENT_QML_MAIN));

	ABackend* oBackend = &ABackend::mInstance();
	QObject::connect(
		oController,&AThreadObjectControllerTemplate::sgRun,
		[&oBackend,&oApplication,&oEngine,&oConfig](){
			oBackend->mInit(
				&oApplication,&oEngine,
				oEngine.rootContext(),
				static_cast<QObject*>(oConfig)
			);
		}
	);
	QObject::connect(
		oBackend,&ABackend::sgInitiated,
		oEventLoop,&QEventLoop::quit
	);

	emit oController->sgRun();
	oEventLoop->exec();

	QObject::disconnect(oController,nullptr,nullptr,nullptr);
	QObject::disconnect(oBackend,nullptr,oEventLoop,nullptr);
	delete oController;
	delete oEventLoop;

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
