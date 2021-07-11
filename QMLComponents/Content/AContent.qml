// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/07/2021 at 18:21:46
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15

// Application includes
import "qrc:/ClientFreeMobile/QMLComponents/Templates";
import "qrc:/ClientFreeMobile/QMLComponents/Screens";


// Component
AContentTemplate {

	id: oRoot;

	StackView {

		id: oStackView;
		width: parent.width;
		height: parent.height;
		anchors.top: parent.top;
		anchors.bottom: parent.bottom;
		anchors.left: parent.left;
		anchors.right: parent.right;

		Component.onCompleted: {

			oStackView.push(oScreenMain);
		}

		Component {id: oScreenTest; AScreenTest {}}
		Component {id: oScreenMain; AScreenMain {}}
		Component {id: oScreenMenu; AScreenMenu {}}
		Component {id: oScreenStorage; AScreenStorage {}}

		pushEnter: Transition {

			PropertyAnimation {

				property: "opacity";
				from: 0;
				to: 1;
				duration: 200;
			}
		}

		pushExit: Transition {

			PropertyAnimation {

				property: "opacity";
				from: 1;
				to: 0;
				duration: 200;
			}
		}

		popEnter: Transition {

			PropertyAnimation {

				property: "opacity";
				from: 0;
				to: 1;
				duration: 200;
			}
		}

		popExit: Transition {

			PropertyAnimation {

				property: "opacity";
				from: 1;
				to: 0;
				duration: 200;
			}
		}
	}

	function mOnSgOrientationChanged(inOrientation) {

		console.log("Orientation changed. Current orienttion:",inOrientation);
	}
}
