// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/07/2021 at 18:29:12
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Inputs";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenTest";

	AInputText {

		id: oTextInput;
		width: parent.width * 0.8;
		height: 40;
		anchors.centerIn: parent;
	}
}
