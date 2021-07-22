// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 21/07/2021 at 12:07:32
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

// Application includes

// Application paths
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Views/NewStorage";
import "qrc:/ClentFree/Modules/QMLComponents/Buttons/Screen";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenNewStorage";

	RowLayout {

		id: oNewStorageMenu;
		width: parent.width;
		height: 50;
		anchors.top: oHeaderScreenNewStorage.bottom;
		anchors.left: oRoot.left;
		anchors.right: oRoot.right;

		Button {

			id: oButtonProperties;
			text: "Properties";
			Layout.fillWidth: true;
			Layout.fillHeight: true;
			onClicked: {

				console.log("Clicked oButtonProperties");
				oLoaderScreenNewStorage.sourceComponent = oNewStoragePropeties;
			}
		}

		Button {

			id: oButtonModel;
			text: "Model";
			Layout.fillWidth: true;
			Layout.fillHeight: true;
			onClicked: {

				console.log("Clicked oButtonModel");
				oLoaderScreenNewStorage.sourceComponent = oNewStorageModel;
			}
		}
	}

	ScrollView {

		id: oContentWrapper;
		clip: true;
		width: parent.width;
		anchors.top: oNewStorageMenu.bottom;
		anchors.bottom: oRoot.bottom;
		anchors.left: oRoot.left;
		anchors.right: oRoot.right;

		Component.onCompleted: {

			oLoaderScreenNewStorage.sourceComponent = oNewStoragePropeties;
		}

		Loader {

			id: oLoaderScreenNewStorage;

			Component {id: oNewStoragePropeties; AViewNewStorageProperties {width: oContentWrapper.width;}}
			Component {id: oNewStorageModel; AViewNewStorageModel {width: oContentWrapper.width;}}
		}
	}

	AHeaderScreenNewStorage {

		id: oHeaderScreenNewStorage;
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

	function mCreateModelElement(inType) {

		var oComponent = Qt.createComponent(
			"qrc:/ClentFree/Modules/QMLComponents/Delegates/AModelElementDelegate.qml"
		);
		var oObject = oComponent.createObject(oStorageModelView, {pLabelText: inType});
		if (oObject === null) {
			console.error("Creating ModelElementDelegate failed");
		}
	}
}
