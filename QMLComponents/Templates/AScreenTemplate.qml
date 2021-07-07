// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/07/2021 at 18:29:38
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes


// Component
Item {

	id: oRootScreenTemplate;

	Connections {

		target: ADevice;
		function onSgOrientationChanged(inOrientation) {

			if (typeof oRootScreenTemplate.mOnSgOrientationChanged === "function") {
				oRootScreenTemplate.mOnSgOrientationChanged(inOrientation);
			}
		}
	}
}
