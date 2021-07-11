// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/07/2021 at 18:15:08
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Buttons";


// Component
AScreenTemplate {

	id: oRoot;
	objectName: "AScreenMain";

	ListModel {

		id: oStoragesModel;

		ListElement {name: "Storage 0";}
		ListElement {name: "Storage 1";}
		ListElement {name: "Storage 2";}
		ListElement {name: "Storage 3";}
		ListElement {name: "Storage 4";}
		ListElement {name: "Storage 5";}
		ListElement {name: "Storage 6";}
		ListElement {name: "Storage 7";}
		ListElement {name: "Storage 8";}
		ListElement {name: "Storage 9";}
		ListElement {name: "Storage 10";}
		ListElement {name: "Storage 11";}
		ListElement {name: "Storage 12";}
		ListElement {name: "Storage 13";}
		ListElement {name: "Storage 14";}
		ListElement {name: "Storage 15";}
		ListElement {name: "Storage 16";}
		ListElement {name: "Storage 17";}
		ListElement {name: "Storage 18";}
		ListElement {name: "Storage 19";}
		ListElement {name: "Storage 20";}
	}

	Component {

		id: oStorageDelegateComponent;

		Rectangle {

			property string pStorage: model.name;

			id: oDelegate;
			height: oStoragesView.cellHeight;
			width: oStoragesView.cellWidth;
			color: AColors.mTransparent();

			Text {

				id: oDelegateLabel;
				text: oDelegate.pStorage;
				anchors.centerIn: parent;
			}

			MouseArea {

				id: oDelegateMouseArea;
				anchors.fill: parent;
				onClicked: {

					console.log("index:",index);
					oStoragesView.currentIndex = index;

					oStackView.push(oScreenStorage);
					oStackView.currentItem.mSetStorage(oDelegate.pStorage);
				}
			}
		}
	}

	Component {

		id: highlight;

		Rectangle {

			width: oStoragesView.cellWidth;
			height: oStoragesView.cellHeight;
			color: "lightsteelblue";
			x: oStoragesView.currentItem.x
			y: oStoragesView.currentItem.y
			Behavior on x { SpringAnimation { spring: 3; damping: 0.2 } }
			Behavior on y { SpringAnimation { spring: 3; damping: 0.2 } }
		}
	}

	GridView {

		id: oStoragesView;
		model: oStoragesModel;
		delegate: oStorageDelegateComponent;
		cellWidth: oStoragesView.mCellWidth();
		cellHeight: 50;
		clip: true;
		bottomMargin: oButtonNew.height * 1.5;
		anchors.top: oHeader.bottom;
		anchors.left: parent.left;
		anchors.right: parent.right;
		anchors.bottom: parent.bottom;
		highlightFollowsCurrentItem: true;
		focus: true;
		highlight: Rectangle {

			id: oHighlight;
			height: oStoragesView.cellHeight;
			width: oStoragesView.cellWidth;
			color: AColors.mGetString("Orange");
		}

		function mCellWidth() {

			var oWidth = 0;

			if (oStoragesView.width > oStoragesView.height) {
				oWidth = oStoragesView.width * 0.5;
			} else {
				oWidth = oStoragesView.width;
			}

			return oWidth;
		}
	}

	AHeaderScreenMain {

		id: oHeader;
		anchors.top: parent.top;
		anchors.left: parent.left;
		anchors.right: parent.right;
	}

	AButtonNew {

		id: oButtonNew;
		objectName: "ButtonNewStorage";
		height: 50;
		anchors.right: parent.right;
		anchors.bottom: parent.bottom;
		anchors.bottomMargin: oButtonNew.height * 0.25;
	}
}
