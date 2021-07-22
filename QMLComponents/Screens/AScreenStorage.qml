// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 11/07/2021 at 16:25:57
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15

// Application includes

// Application paths
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Buttons/Screen";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenStorage";

	ScrollView {

		id: oScrollView;
		width: parent.width;
		clip: true;
		anchors.top: oHeader.bottom;
		anchors.bottom: oRoot.bottom;
		anchors.left: oRoot.left;
		anchors.right: oRoot.right

		Column {

			id: oMenu;
			width: parent.width;
			spacing: 5;

			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Purple");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Purple");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Purple");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Purple");}
		}
	}

	AHeaderScreenStorage {

		id: oHeader;
		anchors.top: parent.top;
		anchors.left: parent.left;
		anchors.right: parent.right;
	}

	AButtonScreenNew {

		id: oButtonNew;
		objectName: "ButtonNewData";
		height: 50;
		anchors.right: parent.right;
		anchors.bottom: parent.bottom;
		anchors.bottomMargin: oButtonNew.height * 0.25;
	}

	function mSetStorage(inStorage) {

		oHeader.pLabelText = inStorage;
	}
}
