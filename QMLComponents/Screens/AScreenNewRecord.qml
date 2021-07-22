// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 22/07/2021 at 14:43:47
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Buttons/Screen";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenNewRecord";

	AHeaderScreenNewRecord {

		id: oHeaderScreenNewRecord;
		anchors.top: parent.top;
		anchors.left: parent.left;
		anchors.right: parent.right;
	}

	AButtonScreenNew {

		id: oButtonNew;
		objectName: "ButtonCreateNewStorage";
		height: 50;
		anchors.right: parent.right;
		anchors.bottom: parent.bottom;
		anchors.bottomMargin: oButtonNew.height * 0.25;

		onClicked: {

			oStackView.pop();
		}
	}
}
