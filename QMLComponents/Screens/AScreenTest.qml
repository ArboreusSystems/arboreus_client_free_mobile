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


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenTest";

	AHeaderScreenMain {

		id: oHeader;
		anchors.top: parent.top;
		anchors.left: parent.left;
		anchors.right: parent.right;
	}
}
