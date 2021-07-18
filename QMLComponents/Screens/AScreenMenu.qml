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

// Application paths
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Menu";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenMenu";

	ScrollView {

		id: oApplicationMenu;
		width: parent.width;
		clip: true;
		anchors.top: oHeaderScreenMenu.bottom;
		anchors.bottom: oRoot.bottom;
		anchors.left: oRoot.left;
		anchors.right: oRoot.right

		Loader {

			id: oApplicationMenuLoader;
			anchors.fill: parent;
			sourceComponent: oMenuViewMain;
		}

		Component {id: oMenuViewMain; AMenuViewMain {}}
		Component {id: oMenuViewSettings; AMenuViewSettings {}}
	}

	AHeaderScreenMenu {

		id: oHeaderScreenMenu;
		anchors.top: parent.top;
		anchors.left: parent.left;
		anchors.right: parent.right;
	}
}
