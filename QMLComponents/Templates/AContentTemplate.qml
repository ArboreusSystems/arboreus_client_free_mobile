// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/07/2021 at 18:22:55
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes


// Component
Item {

	id: oRootScreenContentTemplate;
	height: parent.height;
	width: parent.width;
	anchors.top: parent.top;
	anchors.bottom: parent.bottom;
	anchors.left: parent.left;
	anchors.right: parent.right;

	Connections {

		target: ADevice;
		function onSgOrientationChanged(inOrientation) {

			if (typeof oRootScreenContentTemplate.mOnSgOrientationChanged === "function") {
				oRootScreenContentTemplate.mOnSgOrientationChanged(inOrientation);
			}
		}
	}
}
