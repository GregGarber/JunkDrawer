import QtQuick 2.4
import QtQuick.Controls 2.1

Item {
    id: item_light
    width: 480
    height: 50
    property int lightID: -1
    property variant lightData: "none"
    property alias switchSelected: switchSelected

    Switch {
        id: switchSelected
        text: qsTr("Switch")
        anchors.fill: parent
    }
}
