// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/07/2021 at 18:16:23
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15

// Application includes
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenMenu";

	AHeaderScreenMenu {

		id: oHeader;
		anchors.top: parent.top;
		anchors.left: parent.left;
		anchors.right: parent.right;
	}

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

			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
			Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
		}
	}
}
